#define F_CPU 16000000UL
#include <xc.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "USART.h"
#include "DIO.h"

char data;

ISR(USART_RXC_vect) //interrupt method
{
    data = UDR;
    if (data == 'o') {
        PORTA |= (1 << PIN2);
    } else if (data == 'c') {
        PORTA &= ~(1 << PIN2);
    } else {
    };
}

int main(void) {
    SET_PIN_AS(PORTA, PIN2, OUTPUT, OFF);

    uart_init(ON, OFF, ON, OFF, ASYNCHRONOUS, 9600);
    sei();
    while (1) {
    }
    return 0;
}