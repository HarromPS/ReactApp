#include <stdio.h>

int main()
{

    int  i=5;
    
    printf("value of i++ is %d\n", i++); //i=5
    // i++ i.e 1st execute then do increment
    printf("value of i is %d\n", i);

    printf("value of i is %d\n", i);
    printf("value of ++i is %d\n", ++i);// i=7
    // ++i i.e increment then execute

    i += 5; // find the output of the program before
            // pressing the run button
    printf("value of i is %d\n", i); // i=12
    printf("value of i-- is %d\n", i--);// i=12
    // i-- i.e 1st execute then decrement

    printf("value of i is %d\n", i);
    printf("value of --i is %d\n", --i);//i=10
    // --i i.e decrement then execute

    int b = 1;
    b += b; // b=b+b; --> b=1+1 --> b=2
    printf("%d\n", b);
    return 0;
}