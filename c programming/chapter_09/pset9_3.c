#include<stdio.h>

int main(){
        // Q3 Twenty integers are to be stored in memory.
        // What will you perfer - Array or struct ?
        //Ans - Array

        // Array stores the same datatypes while struct store disimilar datatypes

        int arr[20]={1,2,3,4,5,6,7,8,1,2,3,4,4};
        for (int i=0; i<13;i++){
        printf("%d\n",arr[i]);
        }

 
    return 0; 
}