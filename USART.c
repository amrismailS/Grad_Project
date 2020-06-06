#define  F_CPU 16000000UL
#include <xc.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "DIO.h"



void uart_init(char recieve , char transmit,char recieve_interrupt,char transmit_interrupt,char operation,int baud_rate)
{ 
    switch(recieve)
        { case ON : UCSRB |=(1<<RXEN);
            break;
          case OFF : UCSRB &=~(1<<RXEN);
            break;  
        }
    switch(transmit)
        { case ON : UCSRB |=(1<<TXEN);
            break;
          case OFF : UCSRB &=~(1<<TXEN);
            break;  
        }   
    switch(recieve_interrupt)
        { case ON : UCSRB |=(1<<RXCIE);
            break;
          case OFF : UCSRB &=~(1<<RXCIE);
            break;  
        }    
    switch(transmit_interrupt)
        { case ON : UCSRB |=(1<<TXCIE);
            break;
          case OFF : UCSRB &=~(1<<TXCIE);
            break;  
        }    
    switch(operation)
        { case SYNCHRONOUS : UCSRC |=(1<<UMSEL);
            break;
          case ASYNCHRONOUS : UCSRC &=~(1<<UMSEL);
            break;  
        }  
    
    //baud rate
    //float value = (16000000/(16*9600))-1 ;
    UBRRL = 103  ;
   // UCSRB |= (1<<UDRIE);
}
char uart_recieve()
{
    while(!(UCSRA & (1<<RXC)));
    return UDR ;
} 

void uart_transmit(char senddata)
{
while(!(UCSRA & (1<<TXC)));
UDR = senddata;
}