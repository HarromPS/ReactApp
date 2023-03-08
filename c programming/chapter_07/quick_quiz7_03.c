#include<stdio.h>

int main(){
    
    // Quick quiz : Create a 2D array by taking input from the user.
    // Write a display function to print the content of this 2D array on screen
 
 
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of student no. %d in subject %d\n",i+1,j+1);
            scanf("%d", &marks[i][j]);
        }
    }

     for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The marks of student no. %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
            
        }
    }
    return 0; 
}