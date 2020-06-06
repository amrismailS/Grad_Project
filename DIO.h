
#ifndef DIO_H
#define	DIO_H

#include <xc.h> // include processor files - each processor file is guarded.  
#define INPUT  0
#define OUTPUT 1
#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3
#define OFF    0
#define ON     1
#define PIN_0  0 
#define PIN_1  1
#define PIN_2  2
#define PIN_3  3
#define PIN_4  4
#define PIN_5  5
#define PIN_6  6
#define PIN_7  7
#define ASYNCHRONOUS 0
#define SYNCHRONOUS  1



void SET_PORT_AS(char port ,char direction,char state);
void SET_PIN_AS(char port,char pin ,char direction,char state);
// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

