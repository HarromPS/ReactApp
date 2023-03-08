#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Files input/output in C
int main()
{
    // We use a FILE pointer to read & write in a file
    FILE *ptr;
    // this pointer is now pointing to the file
    // "fopen" is used to open a file
    ptr = fopen("Newfile.txt", "a"); // file gets created

    // Writing in a file
    ptr = fopen("Newfile.txt", "w+");
    int num = 10;

    // To print the data in the file we use
    fprintf(ptr, "%d", num);
    // Closing the files

    // Writing a character/string/integer/value in a file
    char str[20];
    printf("Enter a string : ");
    scanf("%s",&str);
    ptr=fopen("NewFile.txt","w");
    fputs(str,ptr);

    // Reading in a file by user input
    rewind(ptr);
    fscanf(ptr, "%s", str);

    //read a character in a file
    ptr=fopen("NewFile.txt","r");

    printf("The character is: %c",fgetc(ptr));
    // End of file
    char ch;
        ch=fgetc(ptr);
    while(ch!=EOF){
        printf("%c ",ch);
       ch=fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>


// int main () {
//    char str1[10], str2[10], str3[10];
//    int year;
//    FILE * fp;

//    fp = fopen ("file.txt", "w+");
//    fputs("We are in 2012", fp);
   
//    rewind(fp);
//    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
   
// //    printf("Read String1 |%s|\n", str1 );
// //    printf("Read String2 |%s|\n", str2 );
// //    printf("Read String3 |%s|\n", str3 );
// //    printf("Read Integer |%d|\n", year );

//    fclose(fp);
   
//    return(0);
// }