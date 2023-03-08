// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// // Complete the following function.

// int marks_summation(int *marks, int number_of_students, char gender)
// {
//     int i, sum = 0;
//     if (gender == 'b')
//     {
//         i = 0;
//     }
//     else if (gender == 'g')
//     {
//         i = 1;
//     }
//     for (; i < number_of_students; i += 2)
//     {

//         sum += marks[i];
//     }
//     return sum;
// }

// int main()
// {
//     int number_of_students;
//     char gender;
//     int result;

//     scanf("%d", &number_of_students);
//     int *marks = (int *)malloc(number_of_students * sizeof(int));

//     for (int student = 0; student < number_of_students; student++)
//     {
//         scanf("%d", &marks[student]);
//     }

//     scanf(" %c", &gender);
//     result = marks_summation(marks, number_of_students, gender);
//     printf("%d", result);
//     free(marks);

//     return 0;
// }
// ////////////////////////////////////////////////
// #include <stdio.h>
// #include <string.h>
// #include<stdlib.h>

// void digit_freq(char str[],int len)
// {
//     int count[10]={ };
//     char list[10]={'0','1','2','3','4','5','6','7','8','9'};
//     for(int i=0;i<10;i++)
//     {
//         for(int j=0;j<len;j++)
//         {
//             // count[i] =0;
//             if(str[j]==list[i])
//             {
//                 count[i]++;
//             }
//         }
//     }
//     // printf("%d ",strlen(str));
//     for(int i=0;i<10;i++)
//     {
//         printf("%d ",count[i]);
//     }
//     // return 0;
// }
// int main() {    //a11472o5t6

//     //  char* str[30];
//      char *str = (char*)malloc (100*sizeof(char)); 
//     int len;
//     fgets(str,100, stdin);
//     // printf("%s ",str);
//     len=strlen(str);
//     digit_freq(str,len);
//     putchar('\n');
//     free(str);
//     return 0;
// }
// /* #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
// 	int i, j;
// 	char *num = (char*)malloc (1000*sizeof(char)); 
// 	int arr[10] = { };
// 	char s[10] = "0123456789";

// 	fgets(num, 1000, stdin);
// 	int len = strlen(num);

// 	for(i = 0; i < 10; i++)
// 		for(j = 0; j < len; j++)
// 			if(num[j] == s[i])
// 				arr[i]++;

// 	for(i = 0; i < 10; i++)
// 		printf("%d ", arr[i]);

// 	putchar('\n');
// 	free(num);
	
// 	return 0;
// }

//  */

//////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}