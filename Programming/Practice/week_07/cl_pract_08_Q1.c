#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Practical 08: Q1

struct Bank
{
	int AccountNo;
	float Balance;
	char F_name[20], l_name[20];
};
// Function to create the account of customers

void CreateAcc(struct Bank *C, int age, int accNo)
{
	printf("\nEnter the following details to create an account\n");
	printf("First name: ");
	scanf("%s", &C->F_name);
	printf("Last name: ");
	scanf("%s", &C->l_name);
	printf("Deposit some money to create your account: ");
	scanf("%f", &(C->Balance));
	C->AccountNo = accNo;
	printf("The Account number of the customer is: %d", C->AccountNo);
}

// Function for deposit and withdrawl
void Services(struct Bank *C)
{
	char name[10];
	int no, choice;
	float amount;
	printf("Enter details\n");
	printf("Name: ");
	scanf("%s", &name);
	printf("Account number: ");
	scanf("%d", &no);
	if (no == C->AccountNo)
	{
		printf("Enter 1 for deposit & 0 for withdrawl");
		scanf("%d", &choice);
		if (C->Balance > 100)
		{
			printf("Enter the amount to withdrawl\n");
			scanf("%d", &amount);
			if (C->Balance - amount < 100)
			{
				C->Balance -= amount;
				printf("New Balance is :%f \n", C->Balance);
			}
			else
			{
				printf("The balance is insufficient for specified withdrawl\n");
			}
		}
		else if (choice == 1)
		{
			printf("Enter the amount to add to your bank account: ");
			scanf("%f", &amount);
			C->Balance += amount;
			printf("New Balance is :%f \n", C->Balance);
		}
	}
	else
	{
		return Services(C);
	}
}
int main()
{
	int n, j, i = 0, n1 = 0, age, x = 0;
	printf("Enter the number of total customers \n");
	scanf("%d", &n);
	printf("Maximum number of customers in the Bank :: 200\n");
	struct Bank Customer[n];
	while (x != 3 || n1 != n)
	{
		printf("Choose\n1) Create account\n2)Show account details");
		printf("\n3) Exit\n==>");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			printf("Enter your age: ");
			scanf("%d", &age);
			printf("Your Key is: %d", i);
			CreateAcc(&Customer[i], age, i);
			break;
		case 2:
			printf("Enter your key: ");
			scanf("%d", &j);
			Services(&Customer[j]);
			break;
		case 3:
			printf("Thank you for using our service\n");
			break;
		default:
			printf("Finish\n");
		}
		n1++;
		i++;
	}
	if (n == n1)
	{
		printf("Customer limit reached\n");
	}
	return 0;
}

// // }
// #include <stdio.h>
// struct bank
// {
// 	char firstname[50];
// 	char lastname[50];
// 	char acc_no[50];
// 	int bal;
// };
// int main()
// {
// 	int t = 200, n;
// 	printf("Enter the number of customers : ");
// 	scanf("%d", &n);
// 	printf("--------------------------------------\n");
// 	struct bank cust[n];

// 	if (n < t)
// 	{
// 		printf("Enter the Customer details...\n");
// 		printf("--------------------------------------\n");
// 		for (int i = 0; i < n; i++)
// 		{
// 			printf("Enter Last Name of Customer[%d] : ", i + 1);
// 			scanf("%s", &cust[i].lastname);

// 			printf("Enter First Name of Customer[%d] : ", i + 1);
// 			scanf("%s", &cust[i].firstname);

// 			printf("Enter Account no of Customer[%d] : ", i + 1);
// 			scanf("%s", &cust[i].acc_no);

// 			printf("Enter Balance of Customer[%d] : ", i + 1);
// 			scanf("%d", &cust[i].bal);
// 			printf("--------------------------------------\n");
// 		}
// 	}
// 	else
// 	{
// 		printf("\nNumber of Customers exceed 200.");
// 	}
// 	printf("\nCustomer details are...\n");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("\nCustomer Name : %s %s\n", cust[i].firstname, cust[i].lastname);
// 		printf("Account Number : %s\n", cust[i].acc_no);
// 		printf("Account Balance : %d\n", cust[i].bal);
// 		printf("--------------------------------------");

// 	}
// }