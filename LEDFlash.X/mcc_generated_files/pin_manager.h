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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16LF1778
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set S1 aliases
#define S1_TRIS                 TRISAbits.TRISA2
#define S1_LAT                  LATAbits.LATA2
#define S1_PORT                 PORTAbits.RA2
#define S1_WPU                  WPUAbits.WPUA2
#define S1_OD                   ODCONAbits.ODA2
#define S1_ANS                  ANSELAbits.ANSA2
#define S1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define S1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define S1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define S1_GetValue()           PORTAbits.RA2
#define S1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define S1_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define S1_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define S1_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define S1_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define S1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define S1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set S2 aliases
#define S2_TRIS                 TRISAbits.TRISA3
#define S2_LAT                  LATAbits.LATA3
#define S2_PORT                 PORTAbits.RA3
#define S2_WPU                  WPUAbits.WPUA3
#define S2_OD                   ODCONAbits.ODA3
#define S2_ANS                  ANSELAbits.ANSA3
#define S2_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define S2_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define S2_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define S2_GetValue()           PORTAbits.RA3
#define S2_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define S2_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define S2_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define S2_SetPushPull()        do { ODCONAbits.ODA3 = 0; } while(0)
#define S2_SetOpenDrain()       do { ODCONAbits.ODA3 = 1; } while(0)
#define S2_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define S2_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISBbits.TRISB2
#define LED3_LAT                  LATBbits.LATB2
#define LED3_PORT                 PORTBbits.RB2
#define LED3_WPU                  WPUBbits.WPUB2
#define LED3_ANS                  ANSELBbits.ANSB2
#define LED3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED3_GetValue()           PORTBbits.RB2
#define LED3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED3_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set Green aliases
#define Green_TRIS                 TRISBbits.TRISB3
#define Green_LAT                  LATBbits.LATB3
#define Green_PORT                 PORTBbits.RB3
#define Green_WPU                  WPUBbits.WPUB3
#define Green_ANS                  ANSELBbits.ANSB3
#define Green_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Green_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Green_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Green_GetValue()           PORTBbits.RB3
#define Green_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Green_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Green_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Green_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Green_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define Green_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set Blue aliases
#define Blue_TRIS                 TRISBbits.TRISB4
#define Blue_LAT                  LATBbits.LATB4
#define Blue_PORT                 PORTBbits.RB4
#define Blue_WPU                  WPUBbits.WPUB4
#define Blue_OD                   ODCONBbits.ODB4
#define Blue_ANS                  ANSELBbits.ANSB4
#define Blue_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Blue_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Blue_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Blue_GetValue()           PORTBbits.RB4
#define Blue_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Blue_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Blue_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Blue_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Blue_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define Blue_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define Blue_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define Blue_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set Red aliases
#define Red_TRIS                 TRISBbits.TRISB5
#define Red_LAT                  LATBbits.LATB5
#define Red_PORT                 PORTBbits.RB5
#define Red_WPU                  WPUBbits.WPUB5
#define Red_OD                   ODCONBbits.ODB5
#define Red_ANS                  ANSELBbits.ANSB5
#define Red_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Red_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Red_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Red_GetValue()           PORTBbits.RB5
#define Red_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Red_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Red_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Red_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Red_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define Red_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define Red_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Red_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

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