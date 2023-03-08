#include<stdio.h>
#include<stdlib.h>

// DS Polynomial Expression using linked list 

// Creating a structure for different data types

struct expression
{
    int coeff;
    int pow;
    struct expression* next;
};

// Creating a function to get the coefficient & power for the expression
int create_poly(struct expression** first)
{
    struct expression* temp_ptr=(struct expression*)malloc(sizeof(struct expression));
    *first=temp_ptr;
     int coeffi,powr,x=1;
     
     while(x!=0)
     {
     printf("Enter the coefficient: ");
     scanf("%d",&coeffi);
     
     printf("Enter the power: ");
     scanf("%d",&powr);
     
     temp_ptr->coeff=coeffi;
     temp_ptr->pow=powr;
     temp_ptr->next=NULL;
         
     printf("Enter 1 to continue or Enter 0 to end: ");
     scanf("%d",&x);
     printf("\n");
     
     if(x)
     {
        temp_ptr->next=(struct expression*)malloc(sizeof(struct expression));
        temp_ptr=temp_ptr->next;
        temp_ptr->next=NULL;
     }
    }
   
 
}

// Addition operation 
int add_exp();

// Displaying the polynomial expression 
void Display(struct expression* poly)
{
    printf("The polynomial expression is\n==>");
    while(poly != NULL)
	{
		printf("%dx^%d", poly->coeff, poly->pow);
		poly = poly->next;
		if(poly != NULL)
			printf("+");
	}
	printf("\n");
}

int main()
{
    // Dynamic memory allocation for the struct objects
    struct expression* first_exp=NULL;      // Initially pointing to null 
    struct expression* Second_exp=NULL;
    struct expression* result_exp=NULL;
    
    // Calling the expression creating function to make first expression 
    printf("Enter for first polynomial\n\n");
    create_poly(&first_exp);
    // Displaying expression
    Display(first_exp);    
    
    printf("\nEnter for Second polynomial\n\n");
    create_poly(&Second_exp);
    // Displaying expression
    Display(Second_exp);    
    return 0;
}
