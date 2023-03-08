#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// used to define preprocessor variables 
#define NEW 10

// returns 1/true if a macro is defined (boolean) else 0/false
//  REQUIRES "#endif"
#define DEBUG "Hello World!\n"
#ifdef DEBUG 
// Ends Preprocessor Conditionals 
#endif 

// returns true if macros is not defined
//  REQUIRES "#endif"
#ifndef MESSAGE
   #define MESSAGE "You wish!\n"
// Ends Preprocessor Conditionals 
#endif 

// test if compile time condition is true 
// #if NEW " IF NEW\n"

// // alternative of #if
// #else NEW

// Ends Preprocessor Conditionals 
// #endif

// used to provide additional info to the compiler
// #pragam 


// Ends preprocessor with error on stdrr
// #error

// undefines a macros which is defined already
#undef NEW

int main(){
    DEBUG;
    return 0; 
}