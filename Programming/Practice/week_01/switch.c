#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    char op;
    printf("Enter the two nos \n");
    scanf("%d%d\n",&a,&b);
    scanf("%c",&op);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    switch(op) //you can choose from differernt cases
    {
    case '+':
        printf("Addition=%d\n",c);
        break;
    case '/':
        printf("Division=%d\n",f);
        break;
    case '-':
        printf("Substration=%d\n",d);
        break;
    case '*':
        printf("Multiplicaton=%d\n",e);
        break;
    case '%':
        printf("Modulus=%d\n",g);
        break;
    default:
        printf ("Invald input please try the following for proper outputs \n 1 for add \n 2 for sub \n 3 for division \n 4 for multiplication \n 5 for modulus\n ");
        break;
    }

    return 0;
}