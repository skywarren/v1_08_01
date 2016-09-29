/*******************************************************************************
  SQI Peripheral Library Template Implementation

  File Name:
    sqi_TapDelay_Default.h

  Summary:
    SQI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : TapDelay
    and its Variant : Default
    For following APIs :
        PLIB_SQI_TapDelaySet
        PLIB_SQI_ExistsTapDelay

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _SQI_TAPDELAY_DEFAULT_H
#define _SQI_TAPDELAY_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _SQI_CLK_INPUT_DELAY_VREG(index)
    _SQI_DATA_OUT_DELAY_VREG(index)
    _SQI_CLOCK_OUTPUT_DELAY_VREG(index)

  MASKs:
    _SQI_CLK_INPUT_DELAY_MASK(index)
    _SQI_DATA_OUT_DELAY_MASK(index)
    _SQI_CLOCK_OUTPUT_DELAY_MASK(index)

  POSs:
    _SQI_CLK_INPUT_DELAY_POS(index)
    _SQI_DATA_OUT_DELAY_POS(index)
    _SQI_CLOCK_OUTPUT_DELAY_POS(index)

  LENs:
    _SQI_CLK_INPUT_DELAY_LEN(index)
    _SQI_DATA_OUT_DELAY_LEN(index)
    _SQI_CLOCK_OUTPUT_DELAY_LEN(index)

*/


//******************************************************************************
/* Function :  SQI_TapDelaySet_Default

  Summary:
    Implements Default variant of PLIB_SQI_TapDelaySet

  Description:
    This template implements the Default variant of the PLIB_SQI_TapDelaySet function.
*/

PLIB_TEMPLATE void SQI_TapDelaySet_Default( SQI_MODULE_ID index , uint8_t sdrClkInDly , uint8_t dataOutDly , uint8_t clkOutDly )
{
	_SFR_WRITE (_SQI_CLOCK_OUTPUT_DELAY_VREG(index),
				sdrClkInDly << 8 |
				dataOutDly << 4 |
				clkOutDly);
}


//******************************************************************************
/* Function :  SQI_ExistsTapDelay_Default

  Summary:
    Implements Default variant of PLIB_SQI_ExistsTapDelay

  Description:
    This template implements the Default variant of the PLIB_SQI_ExistsTapDelay function.
*/

#define PLIB_SQI_ExistsTapDelay PLIB_SQI_ExistsTapDelay
PLIB_TEMPLATE bool SQI_ExistsTapDelay_Default( SQI_MODULE_ID index )
{
    return true;
}


#endif /*_SQI_TAPDELAY_DEFAULT_H*/

/******************************************************************************
 End of File
*/

