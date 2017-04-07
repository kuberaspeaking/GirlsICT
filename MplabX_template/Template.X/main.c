/*
 * File:   main.c
 * Author: Ahmed
 *
 * Created on April 4, 2017, 7:40 AM
 */
#include "Library.h"

#define ROUTINE_SIZE 10

int main(void) {
#ifdef __XC8
    SYSTEM_Initialize();
#else
    system_init();
#endif
    
    routine_item_t items[ROUTINE_SIZE];
    excute_routine(items);
    

    return 0;
}


