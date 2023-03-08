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