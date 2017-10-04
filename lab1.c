#include <p18f452.h>
#include <stdio.h>


#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
 
 
void main (void)
{
    int count = 0;
    PORTA = 0;
    TRISA = 0;
    PORTB = 0b00000000;
    TRISB = 0b00000000;
   
    //int count = 0;
   
   for (count = 1; count < 16; count++)
    { 
        PORTB = count; 
    }
   
}
