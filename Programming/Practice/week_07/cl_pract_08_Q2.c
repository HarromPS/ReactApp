#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Cl Practical 08: Q2
// Structure for students
struct Students
{
    char name[20], Dept[10], course[20];
    int Rollno, year_of_joining;
};
// function to fill the details of the student
void Details(struct Students *a, int x)
{
    printf("Enter the details of students no %d\n", x + 1);
    printf("Name: ");
    scanf("%s", &(a->name));
    printf("Roll No: ");
    scanf("%d", &(a->Rollno));
    printf("Department: ");
    scanf("%s", &(a->Dept));
    printf("Course: ");
    scanf("%s", &(a->course));
    printf("Joining Year: ");
    scanf("%d", &(a->year_of_joining));
}
// Function to print the names & joining year of all the students
void Show(struct Students *a,int n)
{
    printf("The Names & joining year of the students are as\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d student: (%s,%d)\n", i + 1, ((*a).name), (a->year_of_joining));
        a++;
    }
}

// Function to print the data of the student whose roll no is given
void Data(struct Students *a, int rollno,int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a->Rollno == rollno)
        {
            printf("The data of the student is\n");
            printf("Name: %s\n", ((*a).name));
            printf("Roll No: %d\n", ((*a).Rollno));
            printf("Department: %s\n", ((*a).Dept));
            printf("Course: %s\n", ((*a).course));
            printf("Joining Year: %d\n", ((*a).year_of_joining));
        }
        a++;
    }
}
int main()
{
    int n, x, i = 0, rollno, y;
    printf("Enter how many students are there: ");
    scanf("%d", &n);
    struct Students *S1 = (struct Students *)malloc(sizeof(struct Students) * n);
    while (x != 4)
    {
        printf("\n1) Add Student\n2) Details of all students\n");
        printf("3) Details of student through Roll no\n4)Exit\n==>");
        scanf("%d", &x); 
        switch (x)
        {
        case 1:
            Details(&S1[i], i);
            break;
        case 2:
            y = sizeof(S1) / sizeof(struct Students);
            Show(S1, n);
            break;
        case 3:
            printf("Enter the Roll No:: ");
            scanf("%d", &rollno);
            Data(S1, rollno,n);
            break;
        case 4:
            printf("Finish\n");
            break;
        default:
            printf("End\n");
            break;
        }
        i++;
    }

    return 0;
}