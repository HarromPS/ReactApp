#include <iostream>
#include <cstdio>
using namespace std;
// pointer to a const
void f1()
{
    int i = 100;
    const int *pi = &i;
    // read only
    // *pi = 200;// cannot be changed 
    // pi++;
}

// const pointer
void f2()
{
    int i = 100;
    int *const pi = &i;
    *pi = 200;
    // read only
    // pi++;// cannot change the where the pointer is pointing to 
}

// const pointer to a const
void f3()
{
    int i = 100;
    const int *const pi = &i;
    // read only
    // *pi = 200;// cannot change the values
    // pi++; // cannot change where the pointer is pointing to 
}

int main()
{
    f1();
    f2();
    f3();

    return 0;
}
