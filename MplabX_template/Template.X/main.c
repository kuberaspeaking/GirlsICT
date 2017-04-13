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
    
    const routine_item_t* items;
    items = get_bubble_routine();
    routine_item_t news;
    
    while(1)
    {        
        communicate_with_bubbles();
//        excute_next_routine_item(items);
//        for(int i=0; i <MAX_ROUTINE_SIZE; i++){
//           news = mentor_bubble_routine[i];
//           news = student_bubble_routine[i];
//           news = treasure_bubble_routine[i];
//           news = paired_bubble_routine[i];
//           news = error_routine[i];
//        }
//        load_color(get_color_val(off),lowest);
    }  

    return 0;
}


