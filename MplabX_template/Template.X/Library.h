/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H


#ifdef __XC8
#include <xc.h> // include processor files - each processor file is guarded.  
#include "mcc_generated_files/mcc.h"
#else
#include <pic16lf1614.h> // Contains config addresses and options
#include <stdint.h> //Needed for uint16_t
#endif

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * define bubles address ranges 
 */
#define MENTOR_ADDRESS_RANGE 10
#define TREASURE_ADDRESS_RANGE 30
#define SPECIAL_ADDRESS_RANGE 35
#define STUDENT_ADDRESS_RANGE 255    
    
    
typedef enum comm_control{
    comm_on=0,
    comm_off,
    comm_address_detection_on,
    comm_address_detection_off,
    comm_8bit_mode,
    comm_9bit_mode

}comm_control_t;

typedef enum bubble_class {
    uninitialized_bubble = 0,
    mentor_bubble,
    student_bubble,
    treasure_bubble,
    special_bubble,
    unknown_bubble
}bubble_class_t;


#ifndef __XC8
 void system_init(void);
#endif


/*Project APIs*/

void load_color(uint16_t Red, uint16_t Green, uint16_t Blue);
void comm_control(comm_control_t control_word);
void enable_address_detection();
void disable_address_detection();
void set_bubble_address(uint8_t address);
uint8_t get_bubble_address(void);
bubble_class_t detect_bubble_class(void);

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

