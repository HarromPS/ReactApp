#include <stdio.h>

typedef struct vector
{
    int x, y;
} X; // giving alias to struct vector

X sumvector(X v1, X v2)
{
    X result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main() // Addition of structure variables
{

    // Q2 Write a function su vector which returns the sum of
    // two vectors passed to it. The vectors must be two dimensional.

    struct vector v1, v2, sum;
    v1.x = 2; // v1 int x
    v1.y = 3; // v1 int y
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);

    v2.x = 3; // v2 int x
    v2.y = 4;  // v2 int y
    printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("x dim of result is %d and y dim is %d\n",sum.x,sum.y);
    return 0;
}