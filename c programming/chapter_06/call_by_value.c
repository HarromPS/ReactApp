#include <stdio.h>
int sum(int a, int b);

int main()
{ // this is an example of call by value
  // call by value me variable ki value pass hoti hai

  int a = 7, b = 9;
  printf("The value of a and b is %d and %d\n ", a, b);
  printf("The value of 7+9 is %d \n ", sum(a, b));

  // at the point when the controller comes to sum(a,b)
  // it goes to functn defination, which is
  //  int sum (int a, int b){
  //   int c;
  // c = a + b;
  // a = 898;
  // b = 8989;
  // return c;
  //}

  printf("The value of a and b after function calls is %d and %d\n ", a, b);

  return 0;
}
int sum(int a, int b) // copies of a=7 and b=9 are copied in int a and int b
{
  int c;
  c = a + b; // the function will not change the values of the variables a & b
             // Because copied values of a and b are called here

  a = 898; // trying to change the values of the values of variables in main
  b = 8989;
  return c;
}
