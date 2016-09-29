/*******************************************************************************
  SQI Peripheral Library Template Implementation

  File Name:
    sqi_ConBufferReset_Default.h

  Summary:
    SQI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : ConBufferReset
    and its Variant : Default
    For following APIs :
        PLIB_SQI_ConBufferSoftReset
        PLIB_SQI_ExistsConBufferSoftReset

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

#ifndef _SQI_CONBUFFERRESET_DEFAULT_H
#define _SQI_CONBUFFERRESET_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _SQI_CONTROL_BUF_RESET_VREG(index)

  MASKs:
    _SQI_CONTROL_BUF_RESET_MASK(index)

  POSs:
    _SQI_CONTROL_BUF_RESET_POS(index)

  LENs:
    _SQI_CONTROL_BUF_RESET_LEN(index)

*/


//******************************************************************************
/* Function :  SQI_ConBufferSoftReset_Default

  Summary:
    Implements Default variant of PLIB_SQI_ConBufferSoftReset

  Description:
    This template implements the Default variant of the PLIB_SQI_ConBufferSoftReset function.
*/

PLIB_TEMPLATE void SQI_ConBufferSoftReset_Default( SQI_MODULE_ID index )
{
	_SFR_BIT_WRITE (_SQI_CONTROL_BUF_RESET_VREG(index),
					_SQI_CONTROL_BUF_RESET_POS(index),
					1);
}


//******************************************************************************
/* Function :  SQI_ExistsConBufferSoftReset_Default

  Summary:
    Implements Default variant of PLIB_SQI_ExistsConBufferSoftReset

  Description:
    This template implements the Default variant of the PLIB_SQI_ExistsConBufferSoftReset function.
*/

#define PLIB_SQI_ExistsConBufferSoftReset PLIB_SQI_ExistsConBufferSoftReset
PLIB_TEMPLATE bool SQI_ExistsConBufferSoftReset_Default( SQI_MODULE_ID index )
{
    return true;
}


#endif /*_SQI_CONBUFFERRESET_DEFAULT_H*/

/******************************************************************************
 End of File
*/

