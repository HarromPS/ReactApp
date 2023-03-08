#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

// Cl Practical 08: Q3
// Creating a Structure for Cricketers
struct Cricketer
{
    int age, TestMatches;
    int AvgRuns;
    char name[20];
};

// Function to assign the average runs of the cricketers
void Average(struct Cricketer C)
{
    printf("Enter the details of the cricketer\n");
    printf("Name: ");
    scanf("%s", &C.name);
    printf("Age: ");
    scanf("%d", &C.age);
    printf("Number of test matches played: ");
    scanf("%d", &C.TestMatches);
    printf("Average runs scored: ");
    scanf("%d", &C.AvgRuns);
}

void Show(struct Cricketer *C)
{
    printf("Name: %s\n", C->name);
    printf("Age: %d\n", C->age);
    printf("Number of test matches played: %d\n", C->TestMatches);
    printf("Average runs scored: %d\n", C->AvgRuns);
}

// Function to arrange the records in acending order by average runs using
// qsort() functions
int cmpfunction(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int compare(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    struct Cricketer Ck[20];
    int players, runs[20];
    printf("Enter how many players played cricket: ");
    scanf("%d", &players);
    for (int i = 0; i < players; i++)
    {
        Average(Ck[i]);
        // runs[i] = Ck[i].AvgRuns;
    }
    qsort(Ck, players, sizeof(struct Cricketer), cmpfunction);
    printf("\nThe details of the players according to their average runs scored\n");
    for (int i = 0; i < players; i++)
    {
        Show(Ck);
    }
    return 0;
}