#include <stdio.h>
#include <stdlib.h>

int main()

{
    int *ptr;

    ptr = (int *)malloc(6*sizeof(int));

    for (int i = 0; i < 6; i++){
        printf("The value of %d element is: %d\n", i + 1, ptr[i]);
}

    // free function frees the memory whether allocated with 
    // malloc or calloc

    // SYNTAX:
    // free(pointer_name)
    
    free(ptr);

return 0;
}