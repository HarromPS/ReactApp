#include <stdio.h>

int main()
{

    // FILE is a structure
    // * is used to make the pointer of this
    FILE *ptr;

    // fopen is a function to open any file in any mode
    // r=reading , w=riting

    ptr = fopen("sample.txt", "r"); // r for reading

    ptr = fopen("sample2.txt", "rb"); // for reading in binary
    // "rb"/"r" if file exist then we get its pointer
    // if does not exist it will return NULL

    // ptr = fopen("sample.txt", "w"); // w for writing

    // ptr=fopen ("sample2.txt","wb"); // for writing in binary
    // "wb" for writing binary
    // e.g if you have written a code in C and writes
    // a code in C++ then if file exists then the contents will gets overwritten
    // hence, the program gets changed

    // "a" ==> append i.e hello world --> helloworld
    // files will gets appended i.e will add up

    // text files ==> ".txt", ".c"
    // a text file can be opened on text editor

    // binary files ==> ".jpg", ".dat"
    // a binary file cannot be opened i.e contens can't be 
    // accessed on a text editor

    return 0;
}