#include <stdio.h>
#include <string.h> // library for string

struct employee // user defined datatype
{
    int code;
    float salary;
    char name[10];
    char ex[29];
};

int main() // ARRAY OF STRUCTURE
{

    int n;
    printf("\nEnter the number of employee in your company\n");

    // for example n=3
    scanf("%d", &n);
    struct employee amazon[20]; // array is the variable of type struct employee
    {
        for (int i = 0; i < n; i++)
        {
            amazon[i].name; // dot(.) operator is used to access the member of
                            //  structure
                            //  dot is the the member access operator in C
            // dot accesses the members present inside the structure object

            printf("\nEnter the name of your Employee no. %d\n", i + 1);
            scanf("%s", &amazon[i].name);

            amazon[i].code;
            printf("Enter the unique code for your Employee no. %d\n", i + 1);
            scanf("%d", &amazon[i].code);

            amazon[i].salary;
            printf("Enter the salary to be given to Employee no. %d\n", i + 1);
            scanf("%f", &amazon[i].salary);

            printf("\nThe name of employee no. %d is %s\n", (i + 1), amazon[i].name);
            printf("The unique code for employee no. %d is %d\n", (i + 1), amazon[i].code);
            printf("The salary of the employee %d is %.2f\n", (i + 1), amazon[i].salary);
        }
        
        
    }

    return 0;
}