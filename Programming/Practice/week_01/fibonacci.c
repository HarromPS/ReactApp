#include <stdio.h>

int main()
// CREATING A FIBONACCI SERIES

{
    int i, v1, v2, next_value = 0;
    // printing the fibonacci series

    v1=0;
    v2=1;
    next_value =v1+v2; 
    // 1st value v1=0 2nd value v2=1, next value =v1+v2 

    int n;
    printf("Enter a limit:\n");
    scanf("%d",&n);

    printf("%d ",v1);
    printf("%d ",v2);


    for (i = 0; i < n-2; i++)
    {
        printf("%d ",next_value);
        v1=v2;                  // v1==> becomes v2
        v2=next_value;          // v2 ==> becomes next value
        next_value=v1+v2;       // next value ==> becomes sum of previous values
    }
    return 0;
}