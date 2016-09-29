/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_AutomaticSuspend_Default.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : AutomaticSuspend
    and its Variant : Default
    For following APIs :
        PLIB_USB_AutoSuspendDisable
        PLIB_USB_AutoSuspendEnable
        PLIB_USB_ExistsAutomaticSuspend

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

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

#ifndef _USB_AUTOMATICSUSPEND_DEFAULT_H
#define _USB_AUTOMATICSUSPEND_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _USB_AUTO_SUSPEND_ON_VREG(index)

  MASKs: 
    _USB_AUTO_SUSPEND_ON_MASK(index)

  POSs: 
    _USB_AUTO_SUSPEND_ON_POS(index)

  LENs: 
    _USB_AUTO_SUSPEND_ON_LEN(index)

*/


//******************************************************************************
/* Function :  USB_AutoSuspendDisable_Default

  Summary:
    Implements Default variant of PLIB_USB_AutoSuspendDisable 

  Description:
    This template implements the Default variant of the PLIB_USB_AutoSuspendDisable function.
*/

PLIB_TEMPLATE void USB_AutoSuspendDisable_Default( USB_MODULE_ID index )
{
    _SFR_BIT_SET(_USB_AUTO_SUSPEND_ON_VREG(index),
                 _USB_AUTO_SUSPEND_ON_POS(index) );
}


//******************************************************************************
/* Function :  USB_AutoSuspendEnable_Default

  Summary:
    Implements Default variant of PLIB_USB_AutoSuspendEnable 

  Description:
    This template implements the Default variant of the PLIB_USB_AutoSuspendEnable function.
*/

PLIB_TEMPLATE void USB_AutoSuspendEnable_Default( USB_MODULE_ID index )
{
    _SFR_BIT_CLEAR(_USB_AUTO_SUSPEND_ON_VREG(index),
                   _USB_AUTO_SUSPEND_ON_POS(index) );
}


//******************************************************************************
/* Function :  USB_ExistsAutomaticSuspend_Default

  Summary:
    Implements Default variant of PLIB_USB_ExistsAutomaticSuspend

  Description:
    This template implements the Default variant of the PLIB_USB_ExistsAutomaticSuspend function.
*/

#define PLIB_USB_ExistsAutomaticSuspend PLIB_USB_ExistsAutomaticSuspend
PLIB_TEMPLATE bool USB_ExistsAutomaticSuspend_Default( USB_MODULE_ID index )
{
    return true;
}


#endif /*_USB_AUTOMATICSUSPEND_DEFAULT_H*/

/******************************************************************************
 End of File
*/

