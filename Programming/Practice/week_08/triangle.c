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
void sort_by_area(triangle *tr, int n)
{
    int arr[n], temp;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (tr[i].a * tr[i].b * tr[i].c);
        printf("The area is %d\n", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = tr[i].a;
                tr[i].a = tr[j].a;
                tr[j].a = temp;

                temp = tr[i].b;
                tr[i].b = tr[j].b;
                tr[j].b = temp;

                temp = tr[i].c;
                tr[i].c = tr[j].c;
                tr[j].c = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    // }
    tr[0].a = 7;
    tr[0].b = 24;
    tr[0].c = 25;
    tr[1].a = 5;
    tr[1].b = 12;
    tr[1].c = 13;
    tr[2].a = 3;
    tr[2].b = 4;
    tr[2].c = 5;
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}