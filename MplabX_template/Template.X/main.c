/*
 * File:   main.c
 * Author: Ahmed
 *
 * Created on April 4, 2017, 7:40 AM
 */
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
#include "Library.h"

int main(void) {
#ifdef __XC8
    SYSTEM_Initialize();
#else
    system_init();
#endif
    int i;
    for (i = 0; i < all_colors_num; i++) {
        strRGB_t color = get_color_val(i);
        load_color(color);
        __delay_ms(1000);
    }

    return 0;
}


