/*******************************************************************************
  I2C Peripheral Library Template Implementation

  File Name:
    i2c_MasterStartRepeat_Default.h

  Summary:
    I2C PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : MasterStartRepeat
    and its Variant : Default
    For following APIs :
        PLIB_I2C_MasterStartRepeat
        PLIB_I2C_ExistsMasterStartRepeat

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

#ifndef _I2C_MASTERSTARTREPEAT_DEFAULT_H
#define _I2C_MASTERSTARTREPEAT_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _I2C_MASTER_START_REPEAT_VREG(index)

  MASKs: 
    _I2C_MASTER_START_REPEAT_MASK(index)

  POSs: 
    _I2C_MASTER_START_REPEAT_POS(index)

  LENs: 
    _I2C_MASTER_START_REPEAT_LEN(index)

*/


//******************************************************************************
/* Function :  I2C_MasterStartRepeat_Default

  Summary:
    Implements Default variant of PLIB_I2C_MasterStartRepeat 

  Description:
    This template implements the Default variant of the PLIB_I2C_MasterStartRepeat function.
*/

PLIB_TEMPLATE void I2C_MasterStartRepeat_Default( I2C_MODULE_ID index )
{
    _SFR_BIT_SET(_I2C_MASTER_START_REPEAT_VREG(index),
                       _I2C_MASTER_START_REPEAT_POS(index) );
}


//******************************************************************************
/* Function :  I2C_ExistsMasterStartRepeat_Default

  Summary:
    Implements Default variant of PLIB_I2C_ExistsMasterStartRepeat

  Description:
    This template implements the Default variant of the PLIB_I2C_ExistsMasterStartRepeat function.
*/

#define PLIB_I2C_ExistsMasterStartRepeat PLIB_I2C_ExistsMasterStartRepeat
PLIB_TEMPLATE bool I2C_ExistsMasterStartRepeat_Default( I2C_MODULE_ID index )
{
    return true;
}


#endif /*_I2C_MASTERSTARTREPEAT_DEFAULT_H*/

/******************************************************************************
 End of File
*/

