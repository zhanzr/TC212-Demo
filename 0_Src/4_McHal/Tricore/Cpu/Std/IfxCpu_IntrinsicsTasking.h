/**
 * \file IfxCpu_IntrinsicsTasking.h
 * \version iLLD_1_0_1_0_0
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Cpu_Intrinsics_Tasking Intrinsics for TASKING compiler
 * \ingroup IfxLld_Cpu_Intrinsics
 *
 */
#ifndef IFXCPU_INTRINSICSTASKING_H
#define IFXCPU_INTRINSICSTASKING_H
/******************************************************************************/
#include "Ifx_Types.h"
/******************************************************************************/
/* *INDENT-OFF* */

/** Function call without return
 */
#define __non_return_call(fun)	__asm__ volatile ("\tji %0"::"a"(fun))

/** Jump and link
 */
IFX_INLINE void __jump_and_link(void (*fun)(void))
{
	__asm__ volatile ("jli %0"::"a"(fun));
}

IFX_INLINE void __moveToDataParam0(unsigned int var)
{
	__asm("mov d4, %0"::"d"(var));
}

IFX_INLINE void __moveToAddrParam0(const void *var)
{
	__asm("mov.aa a4, %0"::"a"(var));
}

IFX_INLINE unsigned int __getDataParamRet(void)
{
	unsigned int var;
	__asm(" mov\t %0, d2":"=d"(var));
	return var;
}

IFX_INLINE void __moveToDataParamRet(unsigned int var)
{
	__asm("mov d2, %0"::"d"(var));
}

IFX_INLINE void __jumpToFunction(const void *fun)
{
	__non_return_call(fun);
}

IFX_INLINE void __jumpToFunctionWithLink(const void *fun)
{
	__jump_and_link((void (*)(void))fun);
}

IFX_INLINE void __jumpBackToLink(void)
{
	__asm("ji a11");
}
/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_any_type Cross type arithmetic operation
 *
 * Macro compatible with float, fix point, signed integer and unsigned integer
 *
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */
#define __minX(X,Y)                     ( ((X) < (Y)) ? (X) : (Y) )
#define __maxX(X,Y)                     ( ((X) > (Y)) ? (X) : (Y) )
#define __saturateX(X,Min,Max)          ( __minX(__maxX(X, Min), Max) )
#define __checkrangeX(X,Min,Max)        (((X) >= (Min)) && ((X) <= (Max)))
/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_singed_integer Signed integer operation
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */
#define __saturate(X,Min,Max)           ( __min(__max(X, Min), Max) )
/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_unsinged_integer Unsigned integer operation
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */
#define __saturateu(X,Min,Max)           ( __minu(__maxu(X, Min), Max) )
/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_float Floating point operation
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */
#define __checkrange(X,Min,Max)         (((X) >= (Min)) && ((X) <= (Max)))

#define __sqrf(X)                       ((X) * (X))
#define __sqrtf(X)                      sqrtf(X)

#define __roundf(X)                     ((((X) - (int)(X)) > 0.5) ? (1 + (int)(X)) : ((int)(X)))
#define __absf(X)                       ( ((X) < 0.0) ? -(X) : (X) )
#define __minf(X,Y)                     ( ((X) < (Y)) ? (X) : (Y) )
#define __maxf(X,Y)                     ( ((X) > (Y)) ? (X) : (Y) )
#define __saturatef(X,Min,Max)          ( __minf(__maxf(X, Min), Max) )
#define __checkrangef(X,Min,Max)        (((X) >= (Min)) && ((X) <= (Max)))

#define __abs_stdreal(X)                ( ((X) > 0.0) ? (X) : -(X) )
#define __min_stdreal(X,Y)              ( ((X) < (Y)) ? (X) : (Y) )
#define __max_stdreal(X,Y)              ( ((X) > (Y)) ? (X) : (Y) )
#define __saturate_stdreal(X,Min,Max)   ( __min_stdreal(__max_stdreal(X, Min), Max) )

#define __neqf(X,Y)                     ( ((X) > (Y)) ||  ((X) < (Y)) )     /**< X != Y */
#define __leqf(X,Y)                     ( !((X) > (Y)) )     /**< X <= Y */
#define __geqf(X,Y)                     ( !((X) < (Y)) )     /**< X >= Y */
/** \} */
/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_fractional Fractional Arithmetic Support
 The next table provides an overview of intrinsic functions to convert fractional values. Note that the
 TASKING VX-toolset C compiler for TriCore fully supports the fractional type so normally you should not
 need these intrinsic functions (except for __mulfractlong). For compatibility reasons the TASKING C
 compiler does support these functions.
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */
#define __fract_to_float(value)  ((float)(value))

#define __mulfractlong __mulfractlong

#define __mulfractfract(fractvalue1,fractvalue2)  ((fractvalue1)*(fractvalue2))

/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_insert Insert / Extract Bit-fields and Bits
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */

#define __extru(a, p, w)            __extru(a,p,w)

#define __extr(a, p, w)             __extr(a,p,w)

#define __imaskldmst(a, v, b, p)    __imaskldmst((int*)a, v, b, p)

#define __insert(a,b,p,w)           __insert(a,b,p,w)

/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_interrupt_handling Interrupt Handling
 The next table provides an overview of the intrinsic functions to read or set interrupt handling.
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */
#define __disable_and_save __disable_and_save

#define __restore __restore

/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_miscellaneous Miscellaneous Intrinsic Functions
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */

/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_packed Packed Data Type Support
 The next table provides an overview of the intrinsic functions for initialization of packed data type.
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */

/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_register Register Handling
 The next table provides an overview of the intrinsic functions that you can use to access control registers.
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */
#define __mtcr_no_isync(reg, val)   \
    __asm("mtcr %0,%1"::"i"(reg),"d"(val));

/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_saturation Saturation Arithmetic Support
 These intrinsics support saturation arithmetic
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */

#define __adds(a,b)                 ((__sat int)(a)+(__sat int)(b))

#define __addsu(a,b)                ((__sat unsigned int)(a)+(__sat unsigned int)(b))

#define __subs(a,b)                 ((__sat int)(a)-(__sat int)(b))

#define __subsu(a,b)                ((__sat unsigned int )(a)-(__sat unsigned int )(b))

/** \} */

/** \defgroup IfxLld_Cpu_Intrinsics_Tasking_single_assembly Insert Single Assembly Instruction
 The next table provides an overview of the intrinsic functions that you can use to insert a single assembly
 instruction.You can also use inline assembly but these intrinsics provide a shorthand for frequently used
 assembly instructions.
 * \ingroup IfxLld_Cpu_Intrinsics_Tasking
 * \{
 */

IFX_INLINE void __nops(void* cnt)
{
    __asm("nop16 \n\t"
          "loop %0,*-2"
          ::"a"(((char*)cnt) - 1));
}

#define NOP(n)   __asm(".DUP " #n "\n\tnop16\n\t.ENDM\n")

#if CPU_NO_LDMST
IFX_INLINE void __ldmstC(volatile void *addr, uint32 mask, uint32 data)
{
    *(volatile uint32 *)addr = (*(volatile uint32 *)addr & ~mask) | (mask & data);
}

#define __ldmst(a,b,c) __ldmstC(a,b,c)
#else

IFX_INLINE void __ldmstAsm(volatile void *addr, uint32 mask, uint32 data)
{
    __asm("\tmov d3, %1 \n"
          "\tmov d2, %2 \n"
          "\tldmst [%0],e2"
          ::"a"(addr), "d"(mask), "d"(data):"d2", "d3");

}

#define __ldmst(addr, mask, data) __ldmstAsm(addr, mask, data)
#endif

IFX_INLINE void __stopPerfCounters(void)
{ //__mtcr (CPU_CCTRL, 0);
    __asm(
            "    mov d0,#0\n"
            "    mtcr #0xFC00,d0\n"
            "    isync\n"
            :::"d0");
}

/** \} */

/* FIXME use inline instead of #define */
/* FIXME is it really required to have #define __setareg(areg,val) ___setareg(areg,val) or can __setareg() implemented directly */
#define ___setareg(areg,val) \
    { __asm (" movh.a\t "#areg",#@his("#val")\n lea\t "#areg",["#areg"]@los("#val")"); }
#define __setareg(areg,val) ___setareg(areg,val)

/** \brief This function is a implementation of a binary semaphore using compare and swap instruction
 * \param address address of resource.
 * \param value This variable is updated with status of address
 * \param condition if the value of address matches with the value of condition, then swap of value & address occurs.
 *
 */
#define  __cmpAndSwap(address,value,condition) \
     __cmpswapw((address), ((unsigned long)value), (condition) )

/** \brief Convert a fixpoint value to float32
 *
 * This function converts a value from a fixpoint format to a float32 format.
 *
 *
 * \param value value to be converted.
 * \param shift position of the fix point. Range = [-256, 255] => (Qx.y format where x = shift+1).
 *
 * \return Returns the converted value in the float32 format.
 *
 */
IFX_INLINE float32 __fixpoint_to_float32(fract value, sint32 shift)
{
    float32 result;

    __asm(
        "   q31tof\t%0, %1, %2  \n"
        : "=d" (result)
        : "d" (value), "d" (shift));
    return result;
}

IFX_INLINE void* __getA11(void)
{
    unsigned int *res;
    __asm__ volatile ("mov.aa %0, a11": "=a" (res) : :"a11");
    return res;
}

IFX_INLINE void __setStackPointer(void *stackAddr)
{
    __asm__ volatile ("mov.aa a10, %0": : "a" (stackAddr) :"a10");
}

IFX_INLINE uint32 IfxCpu_calculateCrc32(uint32 *startaddress, uint8 length) 
{
    uint32 returnvalue;
    __asm("MOV d0, #0x0"); /* set seed value to 0 */
    for (;length > 0; length--) 
    { 
        /*calculate the CRC over all data */
        __asm("MOV d1,%0" : : "d" (*startaddress)); 
        __asm("CRC32 d0,d0,d1"); 
        startaddress++; 
    } 
    __asm("MOV %0,d0" : "=d" (returnvalue)); /* return result of CRC*/
    return returnvalue;
}

IFX_INLINE sint32 __popcnt(sint32 a)
{ 
	sint32 res; 
	__asm("popcnt %0,%1":"=d"(res):"d"(a)); 
		return res; 
}

/* *INDENT-ON* */
/******************************************************************************/
#endif /* IFXCPU_INTRINSICSTASKING_H */
