/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.79.0
        Device            :  PIC18F47Q10
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SCK1 aliases
#define SCK1_TRIS                 TRISCbits.TRISC3
#define SCK1_LAT                  LATCbits.LATC3
#define SCK1_PORT                 PORTCbits.RC3
#define SCK1_WPU                  WPUCbits.WPUC3
#define SCK1_OD                   ODCONCbits.ODCC3
#define SCK1_ANS                  ANSELCbits.ANSELC3
#define SCK1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCK1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCK1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCK1_GetValue()           PORTCbits.RC3
#define SCK1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCK1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCK1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCK1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCK1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCK1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCK1_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define SCK1_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set SDI1 aliases
#define SDI1_TRIS                 TRISCbits.TRISC4
#define SDI1_LAT                  LATCbits.LATC4
#define SDI1_PORT                 PORTCbits.RC4
#define SDI1_WPU                  WPUCbits.WPUC4
#define SDI1_OD                   ODCONCbits.ODCC4
#define SDI1_ANS                  ANSELCbits.ANSELC4
#define SDI1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDI1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDI1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDI1_GetValue()           PORTCbits.RC4
#define SDI1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDI1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDI1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SDI1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SDI1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SDI1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SDI1_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define SDI1_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set SDO1 aliases
#define SDO1_TRIS                 TRISCbits.TRISC5
#define SDO1_LAT                  LATCbits.LATC5
#define SDO1_PORT                 PORTCbits.RC5
#define SDO1_WPU                  WPUCbits.WPUC5
#define SDO1_OD                   ODCONCbits.ODCC5
#define SDO1_ANS                  ANSELCbits.ANSELC5
#define SDO1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SDO1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SDO1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SDO1_GetValue()           PORTCbits.RC5
#define SDO1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SDO1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SDO1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SDO1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SDO1_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define SDO1_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define SDO1_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define SDO1_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set Slave1 aliases
#define Slave1_TRIS                 TRISCbits.TRISC6
#define Slave1_LAT                  LATCbits.LATC6
#define Slave1_PORT                 PORTCbits.RC6
#define Slave1_WPU                  WPUCbits.WPUC6
#define Slave1_OD                   ODCONCbits.ODCC6
#define Slave1_ANS                  ANSELCbits.ANSELC6
#define Slave1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define Slave1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define Slave1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define Slave1_GetValue()           PORTCbits.RC6
#define Slave1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define Slave1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define Slave1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define Slave1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define Slave1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define Slave1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define Slave1_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define Slave1_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set Slave2 aliases
#define Slave2_TRIS                 TRISCbits.TRISC7
#define Slave2_LAT                  LATCbits.LATC7
#define Slave2_PORT                 PORTCbits.RC7
#define Slave2_WPU                  WPUCbits.WPUC7
#define Slave2_OD                   ODCONCbits.ODCC7
#define Slave2_ANS                  ANSELCbits.ANSELC7
#define Slave2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define Slave2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define Slave2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define Slave2_GetValue()           PORTCbits.RC7
#define Slave2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define Slave2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define Slave2_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define Slave2_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define Slave2_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define Slave2_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define Slave2_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define Slave2_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/