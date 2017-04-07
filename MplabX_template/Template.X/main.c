/*
 * File:   main.c
 * Author: Ahmed
 *
 * Created on April 4, 2017, 7:40 AM
 */
#include "Library.h"


int main(void) {
#ifdef __XC8
    SYSTEM_Initialize();
#else
    system_init();
#endif
    
    const routine_item_t* items = get_bubble_routine();
     
    while(1)
    {        
//        communicate_with_bubbles();
        excute_next_routine_item(items);
    }  

    return 0;
}


