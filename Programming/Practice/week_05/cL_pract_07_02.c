#include<stdio.h>
#include<stdlib.h>

// CL Practical 07:Arrays with Pointers & Functions

/*02) Given an array p[5], write a function to shift it circularly left by two positions. 
Thus, if p[0] = 15, p[1]= 30, p[2] = 28, p[3]= 19 and p[4] = 61 
then after the shift p[0] = 28, p[1] = 19, p[2] = 61, p[3] = 15 and p[4] = 30.
Call this function for a   (4 x 5 ) matrix and get its rows left shifted.*/

int shift(int P[][5])	// function prototype
{
	int x=5-1;
	int temp[4][5];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			temp[i][j]=P[i][j];
			P[i][j]=P[i][j+1];
			if(j=(5-1))
			{
				P[i][5-1]=temp[i][j-x];
			}
		}
		x--;
	}

}

int main()
{	
	//int times_shift=2,n=0;
	int P[4][5];
	printf("Enter the elements of the matrix\n");
	for(int i=0;i<4;i++)
	{
		printf("%d row \n",i+1);
		for(int j=0;j<5;j++)
		{
			printf("a%d%d: ",i+1,j+1);
			scanf("%d",&P[i][j]);
		}
	}
	printf("Elements before shift are: \n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",P[i][j]);			
		}
		printf("\n");
	}
	
	printf("Elements after shift are: \n");
	shift(P);
	
	return 0;
}
