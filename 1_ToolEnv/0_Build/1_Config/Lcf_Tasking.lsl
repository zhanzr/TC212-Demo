#define LCF_CSA0_SIZE 8k
#define LCF_USTACK0_SIZE 2k
#define LCF_ISTACK0_SIZE 1k

#define LCF_HEAP_SIZE  2k

#define LCF_CPU0 0

#define LCF_DEFAULT_HOST LCF_CPU0

#define LCF_DSPR0_START 0x70000000
#define LCF_DSPR0_SIZE  88k

#define LCF_CSA0_OFFSET		(LCF_DSPR0_SIZE - 1k - LCF_CSA0_SIZE)
#define LCF_ISTACK0_OFFSET	(LCF_CSA0_OFFSET - 256 - LCF_ISTACK0_SIZE)
#define LCF_USTACK0_OFFSET	(LCF_ISTACK0_OFFSET - 256 - LCF_USTACK0_SIZE)

#define LCF_HEAP0_OFFSET	(LCF_USTACK0_OFFSET - LCF_HEAP_SIZE)

#define LCF_INTVEC0_START 0x800F4000
#define LCF_TRAPVEC0_START 0x80000100

#define INTTAB0         (LCF_INTVEC0_START)
#define TRAPTAB0        (LCF_TRAPVEC0_START)

#define RESET 0x80000020

#include "tc1v1_6_x.lsl"

// Specify a multi-core processor environment (mpe)

processor mpe
{
	derivative = tc23A;
}

derivative tc23A
{
	core tc0
	{
		architecture = TC1V1.6.X;
		space_id_offset = 100;          // add 100 to all space IDs in the architecture definition
		copytable_space = vtc:linear;     // use the copy table in the virtual core for 'bss' and initialized data sections
	}
	
	core vtc
	{
		architecture = TC1V1.6.X;
		import tc0;                     // add all address spaces of core tc0 to core vtc for linking and locating
	}
	
	bus sri
	{
		mau = 8;
		width = 32;
		
		// map shared addresses one-to-one to real cores and virtual cores
		map (dest=bus:tc0:fpi_bus, src_offset=0, dest_offset=0, size=0xc0000000);
		map (dest=bus:vtc:fpi_bus, src_offset=0, dest_offset=0, size=0xc0000000);
	}
	
	memory dsram0 // Data Scratch Pad Ram
	{
		mau = 8;
		size = 88k;
		type = ram;
		map (dest=bus:tc0:fpi_bus, dest_offset=0xd0000000, size=88k, priority=8);
		map (dest=bus:sri, dest_offset=0x70000000, size=88k);
	}
	
	memory psram0 // Program Scratch Pad Ram
	{
		mau = 8;
		size = 8k;
		type = ram;
		map (dest=bus:tc0:fpi_bus, dest_offset=0xc0000000, size=8k, priority=8);
		map (dest=bus:sri, dest_offset=0x70100000, size=8k);
	}
	
	memory pfls0
	{
		mau = 8;
		size = 1M;
		type = rom;
		map     cached (dest=bus:sri, dest_offset=0x80000000,           size=1M);
		map not_cached (dest=bus:sri, dest_offset=0xa0000000, reserved, size=1M);
	}
	
	memory dfls0
	{
		mau = 8;
		size = 1M;
		type = reserved nvram;
		map (dest=bus:sri, dest_offset=0xaf000000, size=1M  );
	}
	
	memory edmem
	{
		mau = 8;
		size = 256k;
		type = ram;
		map (dest=bus:sri, dest_offset=0x9f000000, size=256);
		map (dest=bus:sri, dest_offset=0xbf000000, reserved, size=256k);
	}

	section_setup :vtc:linear
	{
		start_address
		(
			symbol = "_START"
		);
	}
	
	section_setup :vtc:linear
	{
		stack "ustack_tc0" (min_size = 1k, fixed, align = 8);
		stack "istack_tc0" (min_size = 1k, fixed, align = 8);
	}
	
	/*Section setup for the copy table*/
	section_setup :vtc:linear
	{
		copytable
		(
			align = 4,
			dest = linear,
			table
			{
				symbol = "_lc_ub_table_tc0";
				space = :tc0:linear, :tc0:abs24, :tc0:abs18, :tc0:csa;
			}
		);
	}
	
	/*Near data sections*/
	section_layout :vtc:abs18
	{	
		group (ordered, contiguous, align = 4, attributes=rw, run_addr = mem:dsram0)
		{
			select "(.zdata.zdata_cpu0|.zdata.zdata_cpu0.*)";
			select "(.zbss.zbss_cpu0|.zbss.zbss_cpu0.*)";
		}
#		if LCF_DEFAULT_HOST == LCF_CPU0
		group (ordered, contiguous, align = 4, attributes=rw, run_addr = mem:dsram0)
#		endif
		{
			select "(.zdata|.zdata.*)";
			select "(.zbss|.zbss.*)";
		}
	}

	section_layout :vtc:linear 
	{
/*Small data sections, No option given for CPU specific user sections to make generated code portable across Cpus*/
#		if LCF_DEFAULT_HOST == LCF_CPU0
		group a0 (ordered, contiguous, align = 4, attributes=rw, run_addr = mem:dsram0)
#		endif
		{
			select "(.sdata |.sdata.*)";
			select "(.sbss |.sbss.*)";
	    }    
		"_SMALL_DATA_" := sizeof(group:a0) > 0 ? addressof(group:a0) + 32k : addressof(group:a0) & 0xF0000000 + 32k;

		/*Far data sections*/		
		group (ordered, contiguous, align = 4, run_addr = mem:dsram0)
		{
			select "(.data.data_cpu0|.data.data_cpu0.*)";
			select "(.bss.bss_cpu0|.bss.bss_cpu0.*)";
		}     

		group (ordered, contiguous, align = 4, run_addr = mem:edmem)
		{
			select "(.data.data_emem|.data.data_emem.*)";
			select "(.bss.bss_emem|.bss.bss_emem.*)";
		}
#		if LCF_DEFAULT_HOST == LCF_CPU0
		group (ordered, contiguous, align = 4, attributes=rw, run_addr = mem:dsram0)
#		endif
		{
			select "(.data|.data.*)";
			select "(.bss|.bss.*)";
	    }

/*Heap sections*/
#		if LCF_DEFAULT_HOST == LCF_CPU0
		group (ordered, align = 4, run_addr = mem:dsram0[LCF_HEAP0_OFFSET])
#		endif
	    {
	       	heap "heap" (size = LCF_HEAP_SIZE);
	    }    
	    
	    group ustack0(ordered, align = 8, run_addr = mem:dsram0[LCF_USTACK0_OFFSET])
	    {
	       	stack "ustack_tc0" (size = LCF_USTACK0_SIZE);
	    }
	    "__USTACK0":=	"_lc_ue_ustack_tc0";
	    "__USTACK0_END":="_lc_ub_ustack_tc0";
	        
	    group istack0(ordered, align = 8, run_addr = mem:dsram0[LCF_ISTACK0_OFFSET])
	    {
	       	stack "istack_tc0" (size = LCF_ISTACK0_SIZE);
	    }
	    "__ISTACK0":=	"_lc_ue_istack_tc0";
	    "__ISTACK0_END":="_lc_ub_istack_tc0";
	    
	    group  (ordered, align = 64, attributes=rw, run_addr=mem:dsram0[LCF_CSA0_OFFSET]) 
	                reserved "csa_tc0" (size = LCF_CSA0_SIZE);
	    "__CSA0":=		"_lc_ub_csa_tc0";
		"__CSA0_END":=	"_lc_ue_csa_tc0";		
	}
	
	
	section_layout :vtc:linear
	{
		"_lc_u_int_tab" = (LCF_INTVEC0_START);
		"__INTTAB_CPU0" = (LCF_INTVEC0_START);
		
		// interrupt vector tables for tc0, tc1, tc2		
		group int_tab_tc0 (ordered)
        {
#			include "inttab0.lsl"
        }
		
		group trapvec_tc0 (ordered, run_addr=LCF_TRAPVEC0_START)
		{
			select "(.text.traptab_cpu0*)";
		}
		
		group code_psram0 (ordered, attributes=rwx, copy, run_addr=mem:psram0)
		{
			select ".text.cpu0_psram*";
		}		
	}
	
    section_layout :vtc:abs18
	{
                        
		group  (ordered, run_addr=mem:pfls0)
		{
			select ".zrodata.*";
		}

	}
	
    section_layout :vtc:linear
	{		
		group  bmh_0 (ordered, run_addr=0x80000000)
		{
			select "*.bmhd_0";
		}
		group  bmh_1 (ordered, run_addr=0x80020000)
		{
			select "*.bmhd_1";
		}
		group  reset (ordered, run_addr=0x80000020)
		{
			select "*.start";
		}
		group  interface_const (ordered, run_addr=0x80000040)
		{
			select "*.interface_const";
		}
		"__IF_CONST" := addressof(group:ainterface_const);
		group  a1 (ordered, run_addr=mem:pfls0)
		{
			select ".srodata.*";
			select ".ldata.*";
		}
		"_LITERAL_DATA_" := sizeof(group:a1) > 0 ? addressof(group:a1) + 32k : addressof(group:a1) & 0xF0000000 + 32k;
		"_A1_MEM" = "_LITERAL_DATA_";
		
		group  (ordered, run_addr=mem:pfls0)
		{
			select ".rodata.*";
		}
		group  (ordered, run_addr=mem:pfls0)
		{
			select ".text.*";
		}
		group a8 (ordered, run_addr=mem:pfls0)
		{
			select "(.rodata_a8|.rodata_a8.*)";
		}
		"_A8_DATA_" := sizeof(group:a8) > 0 ? addressof(group:a8) + 32k : addressof(group:a8) & 0xF0000000 + 32k;
		"_A8_MEM" := "_A8_DATA_";
		
		group a9 (ordered, run_addr=mem:dsram0)
		{
			select "(.data_a9|.data_a9.*)";
			select "(.bss_a9|.bss_a9.*)";
		}
		"__TRAPTAB_CPU0" := TRAPTAB0;
		"_A9_DATA_" := sizeof(group:a9) > 0 ? addressof(group:a9) + 32k : addressof(group:a9) & 0xF0000000 + 32k;
		"_A9_MEM" = "_A9_DATA_";
	}
}
