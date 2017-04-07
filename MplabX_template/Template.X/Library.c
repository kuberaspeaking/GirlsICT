/*
 * File:   Library.c
 * Author: Ahmed
 *
 * Created on April 4, 2017, 7:40 AM
 */

#include "Library.h"

#ifndef __XC8
 void system_init(void){
     /* Set up the clocks.  We want internal clock source, 4Mhz.
 */

  OSCCON = 0x6a;

/* Set up GPIO bits.
 */

  //  PORTC = 0;  // set port C as GPIO pins
  //  CM1CON0 = 7; // not sure this is needed, has to do with comparitors
  ANSELA = 0;  //be sure port A pins are digital
  ANSELC = 0;  //be sure port C pins are digital
  TRISC0 = 0; // make C0 an output, this is the red LED
  TRISC1 = 0; // make C1 an output, this is the blue LED
  TRISC2 = 0; // make C2 an output, this is the green LED
  TRISC3 = 0; // make C3 an output useful for future debugging

/* The 3 color LED on the board is common anode.  So to turn
 * a LED off we need to drive the pin connected to it high.
 * Pulling it low will turn it on.
 */

  RC0 = 1;    
  RC1 = 1;    
  RC2 = 1;    

/* Set up RC4 and RC5 to be Tx and Rx for the uart respectively.
 * Note that the syntax is different depending on if you are assigning
 * an alternate function to a pin as an output or an input.  If it is
 * an input you refer to the input function like RX in RXPPS.
 * If it is an output you refer to the pin name like RC4 as in RC4PPS
 * below.  A pin can be both an output and an input.
 *
 * Set the baud rate.  We assume the input to the baud clock system
 * is a 4Mhz internal clock, and we assume that the baud rate is as
 * close to 1200 baud as possible.  In this example we assume registers
 * are set such that BRGH=0 and BRG16=0.
 */

//  BRGH = 1;
//  BRG16 = 1;
  SPBRG = 51;  // This is one way to set divisors for 1200 baud
//  SP1BRGL = 51;  // This is another way
//  SP1BRGH = 0;

/* Connect the TX output of the UART to pin RC4.  Table 13-2 on page 175
 * in the PIC16LF1614 user guide is wrong and can not be trusted.  The
 * PPS value to use to assign TX/CK to a pin is 0x6 or 0b00110.  The table
 * shows it as 0b10010, but that is wrong and will not work.  The only
 * other PPS value that I know works is to assign the output latch to
 * a pin.  That value is correct in the table (0x00).  Other listed items
 * in the table might work, but they may also be wrong.
 */

  TRISC4 = 0; // enable RC4 output buffer MUST DO THIS!!
  RC4PPS = 0b00110; // make RC4 the Tx output

/* Set up the UART.  The register parameters are:
 *
 * BAUD1CON: Set bits RCIDL and SCKP.  All others are reset to zero.
 * RC1STA: Set bits SPEN, SREN, and CREN.  All others reset to zero.
 * TX1STA: Set bits TXEN.  All others are reset to zero.
 *
 * In the BAUD1CON register, RCIDL is set because that it its reset
 * state.  It isn't used for anything in this code.  Note also that
 * SCKP is set and so the data bits from the TX pin are inverted.  This
 * is useful on the bubble node as it saves power.  Without it the
 * TX line idles high, which would turn the IR led on.  Inverting the
 * data stream solves this.  On receive, the bubble node will invert it
 * back to normal.
 *
 */

  BAUD1CON = 0b01010000; // Data is inverted
  RC1STA = 0xb0;
  TX1STA = 0x20;


/* Now start sending 0x55 out of the Tx pin.  This pattern is easy to
 * see with a scope.  0x55 is the ASCII letter "U".  We also delay a
 * small amount between characters so it is easy to find the start
 * and stop bits.
 */

  txchar = 0x51; // init this
 }
#endif


/* 
 * bubble address
 */

static uint8_t bubble_address = 0;


/* 
 * color values is 10 bit resolution
 * so values ranges from 0 - 1023
 */
void load_color(uint16_t Red, uint16_t Green, uint16_t Blue){
    if (((Red >= 0U) && (Red <= 1023U)) && ((Green >= 0U) && (Green <= 1023U)) && ((Blue >= 0U) && (Blue <= 1023U)))
    {
        PWM1_LoadDutyValue(Red);
        PWM3_LoadDutyValue(Green);
        PWM4_LoadDutyValue(Blue);
    }
    else
    {
        // bad data so do nothing 
    }
}

void comm_control(comm_control_t control_word){
    if(control_word == comm_on){
        RCSTA1bits.SREN = 1;
    }
    else if(control_word == comm_off){
        RCSTA1bits.SREN = 0;
    }
    else if(control_word == comm_address_detection_on){
        RCSTA1bits.ADDEN = 1;
    }
    else if(control_word == comm_address_detection_off){
       RCSTA1bits.ADDEN = 0; 
    }
    else if(control_word == comm_9bit_mode){
        RCSTA1bits.RX9 = 1;
    }
    else if(control_word == comm_8bit_mode){
       RCSTA1bits.RX9 = 0; 
    }
    else{
        // bad data so do nothing
    }   
    
}

/* if address detection is enable bubble can't receive normal data
 * So after confirming the address disable address detection
 * to receive color data
 */

void enable_address_detection(){
    comm_control(comm_9bit_mode);
    comm_control(comm_address_detection_on);
}

void disable_address_detection(){
    comm_control(comm_8bit_mode);
    comm_control(comm_address_detection_off); 
}

/* setter and getter for bubble address 
 * the address value is in the range of 8bits
 */

void set_bubble_address(uint8_t address){
    bubble_address = address;
}

uint8_t get_bubble_address(void){
    return bubble_address;
}

/* 
 * determine the class of the bubble
 */

bubble_class_t detect_bubble_class(){
    bubble_class_t bubble_class = uninitialized_bubble;
 
    if (bubble_address == 0){
        bubble_class = uninitialized_bubble;
    }
    else if(bubble_address < MENTOR_ADDRESS_RANGE){
        bubble_class = mentor_bubble;
    }
    else if(bubble_address < TREASURE_ADDRESS_RANGE){
        bubble_class = treasure_bubble;
    }
    else if(bubble_address < SPECIAL_ADDRESS_RANGE){
        bubble_class = special_bubble;
    }
    else if(bubble_address < STUDENT_ADDRESS_RANGE){
        bubble_class = student_bubble;
    }
    else {
        bubble_class = unknown_bubble;
    }
    return bubble_class;
}
