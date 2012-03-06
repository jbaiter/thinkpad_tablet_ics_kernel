/*
 * Copyright (c) 2009 NVIDIA Corporation.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of the NVIDIA Corporation nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */
//
// DO NOT EDIT - generated by simspec!
//

#ifndef ___ARICTLR_H_INC_
#define ___ARICTLR_H_INC_

// Register ICTLR_VIRQ_CPU_0  
#define ICTLR_VIRQ_CPU_0                        _MK_ADDR_CONST(0x0)
#define ICTLR_VIRQ_CPU_0_WORD_COUNT                     0x1
#define ICTLR_VIRQ_CPU_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_CPU_0_RESET_MASK                     _MK_MASK_CONST(0xffffffff)
#define ICTLR_VIRQ_CPU_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_CPU_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_CPU_0_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_VIRQ_CPU_0_WRITE_MASK                     _MK_MASK_CONST(0x0)
// Flags set by Hardware, cleared by SW
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_SHIFT                       _MK_SHIFT_CONST(0)
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_FIELD                       (_MK_MASK_CONST(0xffffffff) << ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_SHIFT)
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_RANGE                       31:0
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_WOFFSET                     0x0
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_DEFAULT                     _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_CPU_0_IRQ31_IRQ0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register ICTLR_VIRQ_COP_0  
#define ICTLR_VIRQ_COP_0                        _MK_ADDR_CONST(0x4)
#define ICTLR_VIRQ_COP_0_WORD_COUNT                     0x1
#define ICTLR_VIRQ_COP_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_COP_0_RESET_MASK                     _MK_MASK_CONST(0xffffffff)
#define ICTLR_VIRQ_COP_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_COP_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_COP_0_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_VIRQ_COP_0_WRITE_MASK                     _MK_MASK_CONST(0x0)
// Flags set by Hardware, cleared by SW
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_SHIFT                       _MK_SHIFT_CONST(0)
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_FIELD                       (_MK_MASK_CONST(0xffffffff) << ICTLR_VIRQ_COP_0_IRQ31_IRQ0_SHIFT)
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_RANGE                       31:0
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_WOFFSET                     0x0
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_DEFAULT                     _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_VIRQ_COP_0_IRQ31_IRQ0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register ICTLR_VFIQ_CPU_0  
#define ICTLR_VFIQ_CPU_0                        _MK_ADDR_CONST(0x8)
#define ICTLR_VFIQ_CPU_0_WORD_COUNT                     0x1
#define ICTLR_VFIQ_CPU_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_CPU_0_RESET_MASK                     _MK_MASK_CONST(0xffffffff)
#define ICTLR_VFIQ_CPU_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_CPU_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_CPU_0_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_VFIQ_CPU_0_WRITE_MASK                     _MK_MASK_CONST(0x0)
// Flags set by Hardware, cleared by SW
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_SHIFT                       _MK_SHIFT_CONST(0)
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_FIELD                       (_MK_MASK_CONST(0xffffffff) << ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_SHIFT)
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_RANGE                       31:0
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_WOFFSET                     0x0
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_DEFAULT                     _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_CPU_0_FIQ31_FIQ0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register ICTLR_VFIQ_COP_0  
#define ICTLR_VFIQ_COP_0                        _MK_ADDR_CONST(0xc)
#define ICTLR_VFIQ_COP_0_WORD_COUNT                     0x1
#define ICTLR_VFIQ_COP_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_COP_0_RESET_MASK                     _MK_MASK_CONST(0xffffffff)
#define ICTLR_VFIQ_COP_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_COP_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_COP_0_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_VFIQ_COP_0_WRITE_MASK                     _MK_MASK_CONST(0x0)
// Flags set by Hardware, cleared by SW
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_SHIFT                       _MK_SHIFT_CONST(0)
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_FIELD                       (_MK_MASK_CONST(0xffffffff) << ICTLR_VFIQ_COP_0_FIQ31_FIQ0_SHIFT)
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_RANGE                       31:0
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_WOFFSET                     0x0
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_DEFAULT                     _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_VFIQ_COP_0_FIQ31_FIQ0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register ICTLR_ISR_0  
#define ICTLR_ISR_0                     _MK_ADDR_CONST(0x10)
#define ICTLR_ISR_0_WORD_COUNT                  0x1
#define ICTLR_ISR_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define ICTLR_ISR_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define ICTLR_ISR_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_ISR_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define ICTLR_ISR_0_READ_MASK                   _MK_MASK_CONST(0xffffffff)
#define ICTLR_ISR_0_WRITE_MASK                  _MK_MASK_CONST(0x0)
// Read-only. Set by hardware event, cleared at  source by software.
#define ICTLR_ISR_0_ISR31_ISR0_SHIFT                    _MK_SHIFT_CONST(0)
#define ICTLR_ISR_0_ISR31_ISR0_FIELD                    (_MK_MASK_CONST(0xffffffff) << ICTLR_ISR_0_ISR31_ISR0_SHIFT)
#define ICTLR_ISR_0_ISR31_ISR0_RANGE                    31:0
#define ICTLR_ISR_0_ISR31_ISR0_WOFFSET                  0x0
#define ICTLR_ISR_0_ISR31_ISR0_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_ISR_0_ISR31_ISR0_DEFAULT_MASK                     _MK_MASK_CONST(0xffffffff)
#define ICTLR_ISR_0_ISR31_ISR0_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define ICTLR_ISR_0_ISR31_ISR0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)


// Register ICTLR_FIR_0  
#define ICTLR_FIR_0                     _MK_ADDR_CONST(0x14)
#define ICTLR_FIR_0_WORD_COUNT                  0x1
#define ICTLR_FIR_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define ICTLR_FIR_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define ICTLR_FIR_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_FIR_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define ICTLR_FIR_0_READ_MASK                   _MK_MASK_CONST(0xffffffff)
#define ICTLR_FIR_0_WRITE_MASK                  _MK_MASK_CONST(0x0)
// Read only: Set during write to FIR_SET, cleared  during write to FIR_CLR.
#define ICTLR_FIR_0_FIR31_FIR0_SHIFT                    _MK_SHIFT_CONST(0)
#define ICTLR_FIR_0_FIR31_FIR0_FIELD                    (_MK_MASK_CONST(0xffffffff) << ICTLR_FIR_0_FIR31_FIR0_SHIFT)
#define ICTLR_FIR_0_FIR31_FIR0_RANGE                    31:0
#define ICTLR_FIR_0_FIR31_FIR0_WOFFSET                  0x0
#define ICTLR_FIR_0_FIR31_FIR0_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_FIR_0_FIR31_FIR0_DEFAULT_MASK                     _MK_MASK_CONST(0xffffffff)
#define ICTLR_FIR_0_FIR31_FIR0_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define ICTLR_FIR_0_FIR31_FIR0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)


// Register ICTLR_FIR_SET_0  
#define ICTLR_FIR_SET_0                 _MK_ADDR_CONST(0x18)
#define ICTLR_FIR_SET_0_WORD_COUNT                      0x1
#define ICTLR_FIR_SET_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define ICTLR_FIR_SET_0_RESET_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_FIR_SET_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define ICTLR_FIR_SET_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define ICTLR_FIR_SET_0_READ_MASK                       _MK_MASK_CONST(0x0)
#define ICTLR_FIR_SET_0_WRITE_MASK                      _MK_MASK_CONST(0xffffffff)
// Set Forced Interrupt Bit. Writing a 1 will set an  interrupt
#define ICTLR_FIR_SET_0_FIR_SET_SHIFT                   _MK_SHIFT_CONST(0)
#define ICTLR_FIR_SET_0_FIR_SET_FIELD                   (_MK_MASK_CONST(0xffffffff) << ICTLR_FIR_SET_0_FIR_SET_SHIFT)
#define ICTLR_FIR_SET_0_FIR_SET_RANGE                   31:0
#define ICTLR_FIR_SET_0_FIR_SET_WOFFSET                 0x0
#define ICTLR_FIR_SET_0_FIR_SET_DEFAULT                 _MK_MASK_CONST(0x0)
#define ICTLR_FIR_SET_0_FIR_SET_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ICTLR_FIR_SET_0_FIR_SET_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_FIR_SET_0_FIR_SET_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register ICTLR_FIR_CLR_0  
#define ICTLR_FIR_CLR_0                 _MK_ADDR_CONST(0x1c)
#define ICTLR_FIR_CLR_0_WORD_COUNT                      0x1
#define ICTLR_FIR_CLR_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define ICTLR_FIR_CLR_0_RESET_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_FIR_CLR_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define ICTLR_FIR_CLR_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define ICTLR_FIR_CLR_0_READ_MASK                       _MK_MASK_CONST(0x0)
#define ICTLR_FIR_CLR_0_WRITE_MASK                      _MK_MASK_CONST(0xffffffff)
// Clear Forced Interrupt Bit: Writing a 1 will clear  the forced interrupt
#define ICTLR_FIR_CLR_0_FIR_CLR_SHIFT                   _MK_SHIFT_CONST(0)
#define ICTLR_FIR_CLR_0_FIR_CLR_FIELD                   (_MK_MASK_CONST(0xffffffff) << ICTLR_FIR_CLR_0_FIR_CLR_SHIFT)
#define ICTLR_FIR_CLR_0_FIR_CLR_RANGE                   31:0
#define ICTLR_FIR_CLR_0_FIR_CLR_WOFFSET                 0x0
#define ICTLR_FIR_CLR_0_FIR_CLR_DEFAULT                 _MK_MASK_CONST(0x0)
#define ICTLR_FIR_CLR_0_FIR_CLR_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ICTLR_FIR_CLR_0_FIR_CLR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_FIR_CLR_0_FIR_CLR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register ICTLR_CPU_IER_0  
#define ICTLR_CPU_IER_0                 _MK_ADDR_CONST(0x20)
#define ICTLR_CPU_IER_0_WORD_COUNT                      0x1
#define ICTLR_CPU_IER_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_0_RESET_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IER_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_0_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IER_0_WRITE_MASK                      _MK_MASK_CONST(0x0)
//  Interrupt Enable Status. 0 = Disabled
#define ICTLR_CPU_IER_0_IER31_IER0_SHIFT                        _MK_SHIFT_CONST(0)
#define ICTLR_CPU_IER_0_IER31_IER0_FIELD                        (_MK_MASK_CONST(0xffffffff) << ICTLR_CPU_IER_0_IER31_IER0_SHIFT)
#define ICTLR_CPU_IER_0_IER31_IER0_RANGE                        31:0
#define ICTLR_CPU_IER_0_IER31_IER0_WOFFSET                      0x0
#define ICTLR_CPU_IER_0_IER31_IER0_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_0_IER31_IER0_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IER_0_IER31_IER0_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_0_IER31_IER0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register ICTLR_CPU_IER_SET_0  
#define ICTLR_CPU_IER_SET_0                     _MK_ADDR_CONST(0x24)
#define ICTLR_CPU_IER_SET_0_WORD_COUNT                  0x1
#define ICTLR_CPU_IER_SET_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_SET_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IER_SET_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_SET_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_SET_0_READ_MASK                   _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_SET_0_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
// Writing a 1 in any bit position will enable the  corresponding Interrupt Source for CPU 
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_SHIFT                   _MK_SHIFT_CONST(0)
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_FIELD                   (_MK_MASK_CONST(0xffffffff) << ICTLR_CPU_IER_SET_0_CPU_IER_SET_SHIFT)
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_RANGE                   31:0
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_WOFFSET                 0x0
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_DEFAULT                 _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_SET_0_CPU_IER_SET_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register ICTLR_CPU_IER_CLR_0  
#define ICTLR_CPU_IER_CLR_0                     _MK_ADDR_CONST(0x28)
#define ICTLR_CPU_IER_CLR_0_WORD_COUNT                  0x1
#define ICTLR_CPU_IER_CLR_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_CLR_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IER_CLR_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_CLR_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_CLR_0_READ_MASK                   _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_CLR_0_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
// Writing a 1 in any bit position will disable the  corresponding Interrupt Source for CPU 
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_SHIFT                   _MK_SHIFT_CONST(0)
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_FIELD                   (_MK_MASK_CONST(0xffffffff) << ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_SHIFT)
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_RANGE                   31:0
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_WOFFSET                 0x0
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_DEFAULT                 _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IER_CLR_0_CPU_IER_CLR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register ICTLR_CPU_IEP_CLASS_0  
#define ICTLR_CPU_IEP_CLASS_0                   _MK_ADDR_CONST(0x2c)
#define ICTLR_CPU_IEP_CLASS_0_WORD_COUNT                        0x1
#define ICTLR_CPU_IEP_CLASS_0_RESET_VAL                         _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IEP_CLASS_0_RESET_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IEP_CLASS_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IEP_CLASS_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IEP_CLASS_0_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IEP_CLASS_0_WRITE_MASK                        _MK_MASK_CONST(0xffffffff)
//  Set Priority Interrupt Source For CPU. 1 = FIQ, 0 = IRQ.
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_SHIFT                       _MK_SHIFT_CONST(0)
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_FIELD                       (_MK_MASK_CONST(0xffffffff) << ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_SHIFT)
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_RANGE                       31:0
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_WOFFSET                     0x0
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_DEFAULT                     _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_CPU_IEP_CLASS_0_CPU_IEP_CLASS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register ICTLR_COP_IER_0  
#define ICTLR_COP_IER_0                 _MK_ADDR_CONST(0x30)
#define ICTLR_COP_IER_0_WORD_COUNT                      0x1
#define ICTLR_COP_IER_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_0_RESET_MASK                      _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IER_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_0_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IER_0_WRITE_MASK                      _MK_MASK_CONST(0x0)
//  Interrupt Enable Status. 0 = Disabled.
#define ICTLR_COP_IER_0_IER31_IER0_SHIFT                        _MK_SHIFT_CONST(0)
#define ICTLR_COP_IER_0_IER31_IER0_FIELD                        (_MK_MASK_CONST(0xffffffff) << ICTLR_COP_IER_0_IER31_IER0_SHIFT)
#define ICTLR_COP_IER_0_IER31_IER0_RANGE                        31:0
#define ICTLR_COP_IER_0_IER31_IER0_WOFFSET                      0x0
#define ICTLR_COP_IER_0_IER31_IER0_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_0_IER31_IER0_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IER_0_IER31_IER0_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_0_IER31_IER0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register ICTLR_COP_IER_SET_0  
#define ICTLR_COP_IER_SET_0                     _MK_ADDR_CONST(0x34)
#define ICTLR_COP_IER_SET_0_WORD_COUNT                  0x1
#define ICTLR_COP_IER_SET_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_SET_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IER_SET_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_SET_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_SET_0_READ_MASK                   _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_SET_0_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
// Writing a 1 in any bit position will enable the  corresponding Interrupt Source for COP 
#define ICTLR_COP_IER_SET_0_COP_IER_SET_SHIFT                   _MK_SHIFT_CONST(0)
#define ICTLR_COP_IER_SET_0_COP_IER_SET_FIELD                   (_MK_MASK_CONST(0xffffffff) << ICTLR_COP_IER_SET_0_COP_IER_SET_SHIFT)
#define ICTLR_COP_IER_SET_0_COP_IER_SET_RANGE                   31:0
#define ICTLR_COP_IER_SET_0_COP_IER_SET_WOFFSET                 0x0
#define ICTLR_COP_IER_SET_0_COP_IER_SET_DEFAULT                 _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_SET_0_COP_IER_SET_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IER_SET_0_COP_IER_SET_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_SET_0_COP_IER_SET_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register ICTLR_COP_IER_CLR_0  
#define ICTLR_COP_IER_CLR_0                     _MK_ADDR_CONST(0x38)
#define ICTLR_COP_IER_CLR_0_WORD_COUNT                  0x1
#define ICTLR_COP_IER_CLR_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_CLR_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IER_CLR_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_CLR_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_CLR_0_READ_MASK                   _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_CLR_0_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
// Writing a 1 in any bit position will disable the  corresponding Interrupt Source for COP
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_SHIFT                   _MK_SHIFT_CONST(0)
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_FIELD                   (_MK_MASK_CONST(0xffffffff) << ICTLR_COP_IER_CLR_0_COP_IER_CLR_SHIFT)
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_RANGE                   31:0
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_WOFFSET                 0x0
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_DEFAULT                 _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ICTLR_COP_IER_CLR_0_COP_IER_CLR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register ICTLR_COP_IEP_CLASS_0  
#define ICTLR_COP_IEP_CLASS_0                   _MK_ADDR_CONST(0x3c)
#define ICTLR_COP_IEP_CLASS_0_WORD_COUNT                        0x1
#define ICTLR_COP_IEP_CLASS_0_RESET_VAL                         _MK_MASK_CONST(0x0)
#define ICTLR_COP_IEP_CLASS_0_RESET_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IEP_CLASS_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define ICTLR_COP_IEP_CLASS_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define ICTLR_COP_IEP_CLASS_0_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IEP_CLASS_0_WRITE_MASK                        _MK_MASK_CONST(0xffffffff)
//  Set Priority Interrupt Source For COP. 1 = FIQ, 0 = IRQ.
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_SHIFT                       _MK_SHIFT_CONST(0)
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_FIELD                       (_MK_MASK_CONST(0xffffffff) << ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_SHIFT)
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_RANGE                       31:0
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_WOFFSET                     0x0
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_DEFAULT                     _MK_MASK_CONST(0x0)
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define ICTLR_COP_IEP_CLASS_0_COP_IEP_CLASS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


//
// REGISTER LIST
//
#define LIST_ARICTLR_REGS(_op_) \
_op_(ICTLR_VIRQ_CPU_0) \
_op_(ICTLR_VIRQ_COP_0) \
_op_(ICTLR_VFIQ_CPU_0) \
_op_(ICTLR_VFIQ_COP_0) \
_op_(ICTLR_ISR_0) \
_op_(ICTLR_FIR_0) \
_op_(ICTLR_FIR_SET_0) \
_op_(ICTLR_FIR_CLR_0) \
_op_(ICTLR_CPU_IER_0) \
_op_(ICTLR_CPU_IER_SET_0) \
_op_(ICTLR_CPU_IER_CLR_0) \
_op_(ICTLR_CPU_IEP_CLASS_0) \
_op_(ICTLR_COP_IER_0) \
_op_(ICTLR_COP_IER_SET_0) \
_op_(ICTLR_COP_IER_CLR_0) \
_op_(ICTLR_COP_IEP_CLASS_0)


//
// ADDRESS SPACES
//

#define BASE_ADDRESS_ICTLR      0x00000000

//
// ARICTLR REGISTER BANKS
//

#define ICTLR0_FIRST_REG 0x0000 // ICTLR_VIRQ_CPU_0
#define ICTLR0_LAST_REG 0x003c // ICTLR_COP_IEP_CLASS_0

#ifndef _MK_SHIFT_CONST
  #define _MK_SHIFT_CONST(_constant_) _constant_
#endif
#ifndef _MK_MASK_CONST
  #define _MK_MASK_CONST(_constant_) _constant_
#endif
#ifndef _MK_ENUM_CONST
  #define _MK_ENUM_CONST(_constant_) (_constant_ ## UL)
#endif
#ifndef _MK_ADDR_CONST
  #define _MK_ADDR_CONST(_constant_) _constant_
#endif

#endif // ifndef ___ARICTLR_H_INC_