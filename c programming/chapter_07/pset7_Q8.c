#include <stdio.h>
void print_table(int *mul, int your_num, int n)
{
    for (int i = 0; i < 10; i++)
    {
        mul[i] = your_num * (i + 1);
        printf("%d X %d = %d\n", your_num, (i + 1), mul[i]);
    }
}

int main()
{

    // Q8 Repeat que 7 for a custom input from the user

    int mul[3][10], n;
    printf("Enter a number\n");
    scanf("%d", &n);
    print_table(mul[0], n, 10);
    return 0;
}