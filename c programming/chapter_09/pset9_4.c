#include <stdio.h>

typedef struct arrow
{
    int arr1;
    float arr2;
} A;        // struct arrow = A

int main()
{
    // Q4 Write ap program to illustrate the use of arrow

    A el;
    A *ptr;

    ptr = &el; // ptr will stores the values of el

    ptr->arr1 = 12; // ptr-> ==> (*ptr).arr1  ==> el.arr1
    ptr->arr2 = 12.3;

    // el.arr1=15;       // ==> this will also work
    // el.arr2=20;

    printf("%d\n%.2f\n", el.arr1, el.arr2);

    return 0;
}