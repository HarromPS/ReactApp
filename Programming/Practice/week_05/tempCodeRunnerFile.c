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
