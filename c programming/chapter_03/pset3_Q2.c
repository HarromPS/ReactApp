#include <stdio.h>

int main()
{
    // write a program to find out whether a student is pass or fail ; if
    // it requires total 40% & at least 33% in each subject to pass. Assume 3
    // subjects and take marks as an input from the user

    // let 3 subjects be

    int physics, maths, chemistry;
    printf("Enter physics marks\n");
    scanf("%d",&physics);

    printf("Enter maths marks\n");
    scanf("%d",&maths);

    printf("Enter chemistry marks\n");
    scanf("%d",&chemistry);
    
    float total=(physics+ maths+ chemistry)/3;

    if(total<40 || physics<33 || chemistry<33 || maths<33 ){
        printf("You are FAIL");
    }
    else {
        printf("You are PASS");
    }

    return 0;
}