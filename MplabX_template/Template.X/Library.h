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
#include "mcc_generated_files/mcc.h"
#else
#include <pic16lf1614.h> // Contains config addresses and options
#include <stdint.h> //Needed for uint16_t
// Various fuses

static __code uint16_t __at (_CONFIG1) configword1 = _CLKOUTEN_ON & 
  _BOREN_OFF & _PWRTE_ON & _FOSC_INTOSC;

//static __code uint16_t __at (_CONFIG2) configword2 = _LVP_OFF;

static __code uint16_t __at (_CONFIG3) configword3 = _WDTE_OFF;
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

#define START_WORD 0b11001100
    
/*
 * PWM limits
 */  
#define PWM_MAX 255
#define PWM_MIN 0    
    
/*
 * IR communication control words
 */
typedef enum comm_control{
    comm_on=0,
    comm_off,
    comm_address_detection_on,
    comm_address_detection_off,
    comm_8bit_mode,
    comm_9bit_mode
}comm_control_t;

/*
 * types of bubble nodes based on the stored address
 */
typedef enum bubble_class {
    uninitialized_bubble = 0,
    mentor_bubble,
    student_bubble,
    treasure_bubble,
    special_bubble,
    unknown_bubble
}bubble_class_t;

/*
 * used to recall the index of the color value in the color lookup table
 */

typedef enum colors_names {
    off = 0,	
    White,	
    Red,		
    Lime,	
    Blue,	
    Yellow,	
    Cyan, 	
    Magenta,
    Silver,	
    Gray,	
    Maroon,	
    Olive,	
    Green,	
    Purple,	
    Teal,	
    Navy,   
    all_colors_num
}colors_names_t;

typedef enum RGB_brightness_level{
    Highest=1,
    high,
    low,
    lowest
}RGB_brightness_level_t;

/*
 * to define routine available actions 
 */
typedef enum routine_action {
    color_off = 0,
    color_on,
    color_flash,
    color_one_time,       
}routine_action_t;

/*
 * store the RGB values
 */
typedef struct strRGB{
    uint16_t Red;
    uint16_t Green;
    uint16_t Blue; 
}strRGB_t;


/*
 * Store a routine Item
 */
typedef struct routine_item {
   colors_names_t color;            // to store color RGB values
   RGB_brightness_level_t b_level;  // to store brightness level
   uint16_t time_ms;                // to store action time (delay, flash ...etc.)
   routine_action_t action;         // to store the action type
   uint8_t num_of_repeats;          // to store how many times this action is repeated
}routine_item_t;

#ifndef __XC8
 void system_init(void);
#endif



/*Project APIs*/

//void load_color(strRGB_t RGB);
void comm_control(comm_control_t control_word);
//void enable_address_detection();
//void disable_address_detection();
void set_bubble_address(uint8_t address);
uint8_t get_bubble_address(void);
bubble_class_t detect_bubble_class(void);
//strRGB_t get_color_val(colors_names_t color);
//void perform_action(routine_item_t item);
void excute_routine(routine_item_t* items);
bool receive_buuble_address(uint8_t* address);
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

