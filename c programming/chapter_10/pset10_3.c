#include<stdio.h>
        // WORKING WITH TWO FILE AT THE SAME TIME
int main(){
    // Q3 Write a program to read a text file character by character
    // and write its content twice in a seperate file.

    FILE  *ptr1; // pointer for 1st file
    FILE  *ptr2; // pointer for 2nd file
    ptr1=fopen("file1.txt","r"); // 1st file in read mode 
    ptr2=fopen("file2.txt","w"); // 2nd file in write mode
    char c=fgetc(ptr1); // reads character by character
    while (c!=EOF)  // reads until the end of file  
    {
        fputc(c,ptr2);  // puts the characters to file 2
        fputc(c,ptr2);  // puts the characters to file 2 twice one after the other
        c=fgetc(ptr1);
    }

     while (c!=EOF)  // reads until the end of file  
    {
        fputc(c,ptr2);  // puts the characters to file 2
        fputc(c,ptr2);  // puts the characters to file 2 twice one after the other
        c=fgetc(ptr1);
    }
    fclose(ptr1);      // closing both the files
    fclose(ptr2);


 
    return 0; 
}