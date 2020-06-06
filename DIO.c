#define F_CPU 16000000UL
#include <xc.h>
//#include <avr/delay.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "USART.h"
#include "DIO.h"



void SET_PORT_AS(char port ,char direction,char state)
{
    if (port == PORT_A)
    {  
        switch(direction)
        {   case INPUT : DDRA = 0x00 ;
            break;
            case OUTPUT: DDRA = 0xFF ;
            break;
        }
        switch(state)
        {   case OFF : PORTA = 0x00 ;
            break;
            case ON: PORTA = 0xFF ;
            break;
        }        
    }
    else if (port == PORT_B)
    {  
        switch(direction)
        {   case INPUT : DDRB= 0x00 ;
            break;
            case OUTPUT: DDRB = 0xFF ;
            break;
        }
        switch(state)
        {   case OFF : PORTB = 0x00 ;
            break;
            case ON: PORTB = 0xFF ;
            break;
        }         
    } 
    else if (port == PORT_C)
    {  
        switch(direction)
        {   case INPUT : DDRC= 0x00 ;
            break;
            case OUTPUT: DDRC = 0xFF ;
            break;
        }
        switch(state)
        {   case OFF : PORTC = 0x00 ;
            break;
            case ON: PORTC = 0xFF ;
            break;
        }         
    }
    else if (port == PORT_D)
    {  
        switch(direction)
        {   case INPUT : DDRD= 0x00 ;
            break;
            case OUTPUT: DDRD = 0xFF ;
            break;
        }
        switch(state)
        {   case OFF : PORTD = 0x00 ;
            break;
            case ON: PORTD = 0xFF ;
            break;
        }         
    }    
}



void SET_PIN_AS(char port,char pin ,char direction,char state)
{ if (port == PORT_A)
    { switch(pin)
        { //pin0
            case PIN_0 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN0);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN0);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN0);
                          break;
                          case ON : PORTA |= (1<<PIN0);   
                          break;
                        }
                        //PIN 1
           case PIN_1 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN1);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN1);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN1);
                          break;
                          case ON : PORTA |= (1<<PIN1);   
                          break;
                        }
                        //pin2
           case PIN_2 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN2);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN2);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN2);
                          break;
                          case ON : PORTA |= (1<<PIN2);   
                          break;
                        }
                        //pin3
         case PIN_3 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN3);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN3);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN3);
                          break;
                          case ON : PORTA |= (1<<PIN3);   
                          break;
                        }
                        //pin4
         case PIN_4 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN4);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN4);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN4);
                          break;
                          case ON : PORTA |= (1<<PIN4);   
                          break;
                        }          
                        //pin5
         case PIN_5 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN5);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN5);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN5);
                          break;
                          case ON : PORTA |= (1<<PIN5);   
                          break;
                        }    
                        //pin6
          case PIN_6 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN6);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN6);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN6);
                          break;
                          case ON : PORTA |= (1<<PIN6);   
                          break;
                        }      
          case PIN_7 : switch (direction)
                        { case INPUT : DDRA &= ~(1<<PIN7);
                          break;
                          case OUTPUT : DDRA |= (1<<PIN7);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTA &= ~(1<<PIN7);
                          break;
                          case ON : PORTA |= (1<<PIN7);   
                          break;
                        }              
        //end switch pin                
        }
    } //end if
else if (port == PORT_B)
{ switch(pin)
        { //pin0
            case PIN_0 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN0);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN0);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN0);
                          break;
                          case ON : PORTB |= (1<<PIN0);   
                          break;
                        }
                        //PIN 1
           case PIN_1 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN1);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN1);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN1);
                          break;
                          case ON : PORTB |= (1<<PIN1);   
                          break;
                        }
                        //pin2
           case PIN_2 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN2);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN2);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN2);
                          break;
                          case ON : PORTB |= (1<<PIN2);   
                          break;
                        }
                        //pin3
         case PIN_3 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN3);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN3);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN3);
                          break;
                          case ON : PORTB |= (1<<PIN3);   
                          break;
                        }
                        //pin4
         case PIN_4 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN4);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN4);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN4);
                          break;
                          case ON : PORTB |= (1<<PIN4);   
                          break;
                        }          
                        //pin5
         case PIN_5 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN5);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN5);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN5);
                          break;
                          case ON : PORTB |= (1<<PIN5);   
                          break;
                        }    
                        //pin6
          case PIN_6 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN6);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN6);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN6);
                          break;
                          case ON : PORTB |= (1<<PIN6);   
                          break;
                        }      
          case PIN_7 : switch (direction)
                        { case INPUT : DDRB &= ~(1<<PIN7);
                          break;
                          case OUTPUT : DDRB |= (1<<PIN7);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTB &= ~(1<<PIN7);
                          break;
                          case ON : PORTB |= (1<<PIN7);   
                          break;
                        }              
        //end switch pin                
        }

}//end else if 
    else if (port == PORT_C)
    {switch(pin)
        { //pin0
            case PIN_0 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN0);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN0);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN0);
                          break;
                          case ON : PORTC |= (1<<PIN0);   
                          break;
                        }
                        //PIN 1
           case PIN_1 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN1);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN1);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN1);
                          break;
                          case ON : PORTC |= (1<<PIN1);   
                          break;
                        }
                        //pin2
           case PIN_2 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN2);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN2);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN2);
                          break;
                          case ON : PORTC |= (1<<PIN2);   
                          break;
                        }
                        //pin3
         case PIN_3 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN3);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN3);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN3);
                          break;
                          case ON : PORTC |= (1<<PIN3);   
                          break;
                        }
                        //pin4
         case PIN_4 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN4);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN4);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN4);
                          break;
                          case ON : PORTC |= (1<<PIN4);   
                          break;
                        }          
                        //pin5
         case PIN_5 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN5);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN5);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN5);
                          break;
                          case ON : PORTC |= (1<<PIN5);   
                          break;
                        }    
                        //pin6
          case PIN_6 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN6);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN6);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN6);
                          break;
                          case ON : PORTC |= (1<<PIN6);   
                          break;
                        }      
          case PIN_7 : switch (direction)
                        { case INPUT : DDRC &= ~(1<<PIN7);
                          break;
                          case OUTPUT : DDRC |= (1<<PIN7);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTC &= ~(1<<PIN7);
                          break;
                          case ON : PORTC |= (1<<PIN7);   
                          break;
                        }              
        //end switch pin                
        }
    }// END ELSE IF
    
        else if (port == PORT_D)
            {   switch(pin)
        { //pin0
            case PIN_0 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN0);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN0);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN0);
                          break;
                          case ON : PORTD |= (1<<PIN0);   
                          break;
                        }
                        //PIN 1
           case PIN_1 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN1);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN1);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN1);
                          break;
                          case ON : PORTD |= (1<<PIN1);   
                          break;
                        }
                        //pin2
           case PIN_2 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN2);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN2);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN2);
                          break;
                          case ON : PORTD |= (1<<PIN2);   
                          break;
                        }
                        //pin3
         case PIN_3 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN3);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN3);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN3);
                          break;
                          case ON : PORTD |= (1<<PIN3);   
                          break;
                        }
                        //pin4
         case PIN_4 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN4);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN4);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN4);
                          break;
                          case ON : PORTD |= (1<<PIN4);   
                          break;
                        }          
                        //pin5
         case PIN_5 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN5);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN5);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN5);
                          break;
                          case ON : PORTD |= (1<<PIN5);   
                          break;
                        }    
                        //pin6
          case PIN_6 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN6);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN6);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN6);
                          break;
                          case ON : PORTD |= (1<<PIN6);   
                          break;
                        }      
          case PIN_7 : switch (direction)
                        { case INPUT : DDRD &= ~(1<<PIN7);
                          break;
                          case OUTPUT : DDRD |= (1<<PIN7);   
                          break;
                        }
                        switch (state)
                        { case OFF : PORTD &= ~(1<<PIN7);
                          break;
                          case ON : PORTD |= (1<<PIN7);   
                          break;
                        }              
        //end switch pin                
        }   
            }
}