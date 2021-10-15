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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1507
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

// get/set OnOff aliases
#define OnOff_TRIS                 TRISAbits.TRISA2
#define OnOff_LAT                  LATAbits.LATA2
#define OnOff_PORT                 PORTAbits.RA2
#define OnOff_WPU                  WPUAbits.WPUA2
#define OnOff_ANS                  ANSELAbits.ANSA2
#define OnOff_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define OnOff_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define OnOff_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define OnOff_GetValue()           PORTAbits.RA2
#define OnOff_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define OnOff_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define OnOff_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define OnOff_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define OnOff_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define OnOff_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set Ch01Input aliases
#define Ch01Input_TRIS                 TRISAbits.TRISA4
#define Ch01Input_LAT                  LATAbits.LATA4
#define Ch01Input_PORT                 PORTAbits.RA4
#define Ch01Input_WPU                  WPUAbits.WPUA4
#define Ch01Input_ANS                  ANSELAbits.ANSA4
#define Ch01Input_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Ch01Input_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Ch01Input_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Ch01Input_GetValue()           PORTAbits.RA4
#define Ch01Input_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Ch01Input_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define Ch01Input_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define Ch01Input_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define Ch01Input_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define Ch01Input_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set Ch02Input aliases
#define Ch02Input_TRIS                 TRISAbits.TRISA5
#define Ch02Input_LAT                  LATAbits.LATA5
#define Ch02Input_PORT                 PORTAbits.RA5
#define Ch02Input_WPU                  WPUAbits.WPUA5
#define Ch02Input_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define Ch02Input_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define Ch02Input_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define Ch02Input_GetValue()           PORTAbits.RA5
#define Ch02Input_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define Ch02Input_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define Ch02Input_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define Ch02Input_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set Ch03Input aliases
#define Ch03Input_TRIS                 TRISBbits.TRISB4
#define Ch03Input_LAT                  LATBbits.LATB4
#define Ch03Input_PORT                 PORTBbits.RB4
#define Ch03Input_WPU                  WPUBbits.WPUB4
#define Ch03Input_ANS                  ANSELBbits.ANSB4
#define Ch03Input_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Ch03Input_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Ch03Input_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Ch03Input_GetValue()           PORTBbits.RB4
#define Ch03Input_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Ch03Input_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Ch03Input_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Ch03Input_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Ch03Input_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define Ch03Input_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set Ch04Input aliases
#define Ch04Input_TRIS                 TRISBbits.TRISB5
#define Ch04Input_LAT                  LATBbits.LATB5
#define Ch04Input_PORT                 PORTBbits.RB5
#define Ch04Input_WPU                  WPUBbits.WPUB5
#define Ch04Input_ANS                  ANSELBbits.ANSB5
#define Ch04Input_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Ch04Input_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Ch04Input_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Ch04Input_GetValue()           PORTBbits.RB5
#define Ch04Input_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Ch04Input_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Ch04Input_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Ch04Input_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Ch04Input_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Ch04Input_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set Ch05Input aliases
#define Ch05Input_TRIS                 TRISBbits.TRISB6
#define Ch05Input_LAT                  LATBbits.LATB6
#define Ch05Input_PORT                 PORTBbits.RB6
#define Ch05Input_WPU                  WPUBbits.WPUB6
#define Ch05Input_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define Ch05Input_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define Ch05Input_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define Ch05Input_GetValue()           PORTBbits.RB6
#define Ch05Input_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define Ch05Input_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define Ch05Input_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define Ch05Input_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set Ch06Input aliases
#define Ch06Input_TRIS                 TRISBbits.TRISB7
#define Ch06Input_LAT                  LATBbits.LATB7
#define Ch06Input_PORT                 PORTBbits.RB7
#define Ch06Input_WPU                  WPUBbits.WPUB7
#define Ch06Input_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define Ch06Input_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define Ch06Input_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define Ch06Input_GetValue()           PORTBbits.RB7
#define Ch06Input_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define Ch06Input_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define Ch06Input_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define Ch06Input_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set Ch01Output aliases
#define Ch01Output_TRIS                 TRISCbits.TRISC0
#define Ch01Output_LAT                  LATCbits.LATC0
#define Ch01Output_PORT                 PORTCbits.RC0
#define Ch01Output_ANS                  ANSELCbits.ANSC0
#define Ch01Output_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define Ch01Output_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define Ch01Output_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define Ch01Output_GetValue()           PORTCbits.RC0
#define Ch01Output_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define Ch01Output_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define Ch01Output_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define Ch01Output_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set Ch02Output aliases
#define Ch02Output_TRIS                 TRISCbits.TRISC1
#define Ch02Output_LAT                  LATCbits.LATC1
#define Ch02Output_PORT                 PORTCbits.RC1
#define Ch02Output_ANS                  ANSELCbits.ANSC1
#define Ch02Output_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define Ch02Output_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define Ch02Output_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define Ch02Output_GetValue()           PORTCbits.RC1
#define Ch02Output_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define Ch02Output_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define Ch02Output_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define Ch02Output_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set Ch03Output aliases
#define Ch03Output_TRIS                 TRISCbits.TRISC2
#define Ch03Output_LAT                  LATCbits.LATC2
#define Ch03Output_PORT                 PORTCbits.RC2
#define Ch03Output_ANS                  ANSELCbits.ANSC2
#define Ch03Output_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define Ch03Output_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define Ch03Output_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define Ch03Output_GetValue()           PORTCbits.RC2
#define Ch03Output_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define Ch03Output_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define Ch03Output_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define Ch03Output_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set Ch04Output aliases
#define Ch04Output_TRIS                 TRISCbits.TRISC3
#define Ch04Output_LAT                  LATCbits.LATC3
#define Ch04Output_PORT                 PORTCbits.RC3
#define Ch04Output_ANS                  ANSELCbits.ANSC3
#define Ch04Output_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define Ch04Output_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define Ch04Output_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define Ch04Output_GetValue()           PORTCbits.RC3
#define Ch04Output_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define Ch04Output_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define Ch04Output_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define Ch04Output_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set Ch05Output aliases
#define Ch05Output_TRIS                 TRISCbits.TRISC4
#define Ch05Output_LAT                  LATCbits.LATC4
#define Ch05Output_PORT                 PORTCbits.RC4
#define Ch05Output_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Ch05Output_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Ch05Output_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Ch05Output_GetValue()           PORTCbits.RC4
#define Ch05Output_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Ch05Output_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set Ch06Output aliases
#define Ch06Output_TRIS                 TRISCbits.TRISC5
#define Ch06Output_LAT                  LATCbits.LATC5
#define Ch06Output_PORT                 PORTCbits.RC5
#define Ch06Output_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define Ch06Output_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define Ch06Output_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define Ch06Output_GetValue()           PORTCbits.RC5
#define Ch06Output_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define Ch06Output_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

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