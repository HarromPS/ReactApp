#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// CL Practical 07:Arrays with Pointers & Functions
/*01) Write a program to obtain transpose of a 4 x 4 matrix.
The transpose of a matrix is obtained by exchanging the elements of each row with
 the elements of the corresponding column.
.*/

int Transpose(int A[4][4])
{
	int temp[4][4];
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			temp[i][j] = A[j][i];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			A[i][j] = temp[i][j];
		}
	}
}
int main()
{
	int A[4][4];
	printf("Enter the elements of the matrix\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("a%d%d= ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	}
	printf("Elements Before transpose\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	Transpose(A);
	printf("Elements After transpose\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}

///////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// CL Practical 07:Arrays with Pointers & Functions
/*02) Given an array p[5], write a function to shift it circularly left by two positions.
Thus, if p[0] = 15, p[1]= 30, p[2] = 28, p[3]= 19 and p[4] = 61 then after the shift
p[0] = 28, p[1] = 19, p[2] = 61, p[3] = 15 and p[4] = 30.
Call this function for a (4 x 5 ) matrix and get its rows left shifted.
.*/
// Here row = m = 4 & coloumn = n = 5
int Shift(int P[4][5])
{

	int temp=0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == i && j == 0)
			{
				temp = P[i][j];
			}
			if (j == (5 - 1))
			{
				P[i][j] = temp;
			}
			else
			{
				P[i][j] = P[i][j + 1];
			}
		}
	}
	
}
int main()
{
	int P[4][5];
	printf("Enter the elements of the matrix\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d row \n", i + 1);
		for (int j = 0; j < 5; j++)
		{
			printf("a%d%d= ", i + 1, j + 1);
			scanf("%d", &P[i][j]);
		}
	}
	printf("Elements Before Shift\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", P[i][j]);
		}
		printf("\n");
	}
	printf("Elements After Shift\n");
	Shift(P);
	Shift(P);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", P[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// CL Practical 07:Arrays with Pointers & Functions
/* 3) The area of a triangle can be computed by the sine law when
2 sides of the triangle the angle between them are known.
Area = (1 / 2 ) ab sin ( angle ). Given the following 6 triangular pieces of land,
Write a program to find their area and determine which is largest,
Plot No.  a	      b	    angle
01       137.4	80.9	0.78
02       155.2	92.62	0.89
03       149.3	97.93	1.35
04       160.0  100.25  9.00
05       155.6	68.95	1.25
06       149.7	120.0	1.75
*/

// Creating a structure for the triangular pieces of land 
typedef struct Triangle
{
	float a, b;
	float angle;

} Triangle;

void Area(Triangle land[])
{
	float area[6];
	for (int i = 0; i < 6; i++)
	{
		area[i] = (0.5) * (land[i].a * land[i].b * sin(land[i].angle));
		printf("Area of %d piece of land is %.2f\n",i+1,area[i]);
	}
	float largest;
	largest = area[0];
	for (int i = 0; i < 6; i++)
	{

		if (i == (6 - 1))
		{
			largest = largest;
		}
		else if (largest < area[i])
		{
			largest = area[i];
		}
	}
	printf("The largest area is %.2f\n",largest);
}

int main()
{
	Triangle land[6];
	for (int i = 0; i < 6; i++)
	{
		printf("Enter the two sides of the %d piece of triangluar land\n", i + 1);
		scanf("%f %f", &land[i].a, &land[i].b);
		printf("Angle for %d piece of land: ", i + 1);
		scanf("%f", &land[i].angle);
	}
	printf("Show\n");
	Area(land);

	return 0;
}
/////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// CL Practical 07:Arrays with Pointers & Functions
/*04) The X and Y coordinates of 10 different points are entered through the keyboard.
Write a program to find the distance of last point from the first point
(sum of distance between consecutive points).*/

int Distance(int P[10][1])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			if (i == 10 - 1)
			{
				return 0;
			}
			else
			{
				P[i][j] = P[i + 1][j] - P[i][j];
				if (P[i][j] < 0)
				{
					printf("(%d,%d) & (%d,%d) = %d \n", i + 1, j + 1, i + 2, j + 1, (-1) * P[i][j]);
				}
				else
				{
					printf("(%d,%d) & (%d,%d) = %d \n", i + 1, j + 1, i + 2, j + 1, P[i][j]);
				}
			}
		}
	}

	return 0;
}
int main()
{

	int Points[10][1];
	printf("Enter the Points of the system\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			printf("(%d,%d): ", i + 1, j + 1);
			scanf("%d", &Points[i][j]);
		}
	}
	printf("The consecutive difference between the points are\n");
	Distance(Points);

	return 0;
}
