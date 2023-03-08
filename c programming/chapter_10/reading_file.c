#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;                        // first int in the file
    int num2;                       // second int in the file
    ptr = fopen("sample.txt", "r"); // we have to open the file

    fscanf(ptr, "%d", &num); // getting the input from file "f"
                             // using fscanf

    fscanf(ptr, "%d", &num2); // getting the next int
    // fscanf receives inputs from the file instead of the keyboard

    // We have to close the file after our work is done

    fclose(ptr);

    // fclose will save the resources like storage

    // fclose() function closes the file opened
    // we can use this function anywhere once the file is read
    // then the further operations will not be dependent on the file
    // like printf("The value of num is %d\n", num);

    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);

    return 0;
}