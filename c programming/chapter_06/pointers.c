#include <stdio.h>

int main()
{
    int *j, i = 1;
    j = &i;       // j is storing value of i // value of j=&i;

    int **k = &j; // k is storing the value of j (pointer of pointer)

    printf("Value i %d\n", i);
    printf("Value i in j %d\n", *j);
    printf("Address of i %u\n", &i);
    printf("Value of j %d\n", j); // Address of i is value of j
                              
    printf("Address of j %u\n", &j); // value of j=&i;

    printf("Value of k %d\n", *(&i));
    printf("Address of k %d\n", &k);

    return 0;
}