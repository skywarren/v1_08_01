/*******************************************************************************
  I2C Peripheral Library Template Implementation

  File Name:
    i2c_SlaveBusCollisionDetect_Default.h

  Summary:
    I2C PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : SlaveBusCollisionDetect
    and its Variant : Default
    For following APIs :
        PLIB_I2C_SlaveBusCollisionDetectEnable
        PLIB_I2C_SlaveBusCollisionDetectDisable
        PLIB_I2C_ExistsSlaveBusCollisionDetect

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

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

#ifndef _I2C_SLAVEBUSCOLLISIONDETECT_DEFAULT_H
#define _I2C_SLAVEBUSCOLLISIONDETECT_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _I2C_BUS_COLLISION_INTERRUPT_VREG(index)

  MASKs:
    _I2C_BUS_COLLISION_INTERRUPT_MASK(index)

  POSs:
    _I2C_BUS_COLLISION_INTERRUPT_POS(index)

  LENs:
    _I2C_BUS_COLLISION_INTERRUPT_LEN(index)

*/


//******************************************************************************
/* Function :  I2C_SlaveBusCollisionDetectEnable_Default

  Summary:
    Implements Default variant of PLIB_I2C_SlaveBusCollisionDetectEnable

  Description:
    This template implements the Default variant of the PLIB_I2C_SlaveBusCollisionDetectEnable function.
*/

PLIB_TEMPLATE void I2C_SlaveBusCollisionDetectEnable_Default( I2C_MODULE_ID index )
{
    _SFR_BIT_SET(_I2C_BUS_COLLISION_INTERRUPT_VREG(index),
                       _I2C_BUS_COLLISION_INTERRUPT_POS(index) );
}


//******************************************************************************
/* Function :  I2C_SlaveBusCollisionDetectDisable_Default

  Summary:
    Implements Default variant of PLIB_I2C_SlaveBusCollisionDetectDisable

  Description:
    This template implements the Default variant of the PLIB_I2C_SlaveBusCollisionDetectDisable function.
*/

PLIB_TEMPLATE void I2C_SlaveBusCollisionDetectDisable_Default( I2C_MODULE_ID index )
{
    _SFR_BIT_CLEAR(_I2C_BUS_COLLISION_INTERRUPT_VREG(index),
                       _I2C_BUS_COLLISION_INTERRUPT_POS(index) );
}


//******************************************************************************
/* Function :  I2C_ExistsSlaveBusCollisionDetect_Default

  Summary:
    Implements Default variant of PLIB_I2C_ExistsSlaveBusCollisionDetect

  Description:
    This template implements the Default variant of the PLIB_I2C_ExistsSlaveBusCollisionDetect function.
*/

#define PLIB_I2C_ExistsSlaveBusCollisionDetect PLIB_I2C_ExistsSlaveBusCollisionDetect
PLIB_TEMPLATE bool I2C_ExistsSlaveBusCollisionDetect_Default( I2C_MODULE_ID index )
{
    return true;
}


#endif /*_I2C_SLAVEBUSCOLLISIONDETECT_DEFAULT_H*/

/******************************************************************************
 End of File
*/

