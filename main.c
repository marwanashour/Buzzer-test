/*
 * File:   main.c
 * Author: MARWAN
 *
 * Created on April 7, 2020, 8:43 PM
 */


#include <xc.h>
#define buzzer  3


void main(void) {
    
 DDRA = 0b00001000;
 PORTA =  0b00001000; 
 
    // DDRA |= (1<<buzzer) ;
           
   // PORTA |= (1<<buzzer) ;
 
    
    return;
}
