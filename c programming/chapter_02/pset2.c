#include <stdio.h>

int main()
{ // This is a Practice set
  // Q1 which of the following is invalid in C
  //  a) int a; b=a;
  //  b) int v=3^3;
  //  c) char dt ='19 MAY 2022';

  // a) int a; b=a; // will give you error
  int a, b = a; // is the correct form

  int v = 3 ^ 3; // b) '^' is XOR, but it is not 3 to power 3
  printf("%d\n", v);

  // c) char dt ='19 MAY 2022'; -->
  char dt = '1';
  printf("%c\n", dt);

  // Q2 write a program to find return value of 3.0/8-2
  float d = (3.0 / 8 - 2); // correct -1.625
  printf("%f\n", d);

  int e = (3.0 / 8 - 2); // correct
  printf("%d\n", e);     // will give me only -1 from -1.625

  // Q3 Write a C program to determine if a number  is divisible by 97 or not
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  if (num % 97 == 0)
  {
    printf("Divisibility test return:%d\n", num % 97);
    printf("So, the enterd number %d is divisible by 97\n", num);
  }
  else
  {
    printf("Divisibility test return:%d\n", num % 97);
    printf("So, the entered number %d is not divisible by 97\n", num);
  }

  // Q4 Explain in step by step manner the evaluation of the expression 
  // 3*x/y-z+k, whee x=2,y=3,z=3,k=1
  int x=2,y=3,z=3,k=1,result;
  // 3*2/ 3 -3 +1
  // 6/3 -3 +1
  // 2 -3 +1
  // 0
 printf("The value of result is %d\n",3*x/y-z+k);

 int p=3.0,q=1;
 printf("%d\n",p+q);

  return 0;
}