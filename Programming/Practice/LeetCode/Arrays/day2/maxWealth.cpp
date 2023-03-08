#include <iostream>
#include <cstdio>
using namespace std;

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
    // int max = 0;
    // int current = 0;
    // for (int i = 0; i < accountsSize; ++i)
    // {
    //     for (int j = 0; j < *accountsColSize ; ++j)
    //     {
    //         current += *(*(accounts + i) + j);
    //     }

    //     if (current > max)
    //     {
    //         max = current;
    //     }

    //     current = 0;
    // }

    // return max;
    int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int total=0,max=0;
    for(int i=0;i<accountsSize;i++)
    {
        total=0;
        for(int j=0;j<*accountsColSize;j++)
        {
            total=total+accounts[i][j];
        }
        if(total>max)
        {
            max=total;
        }
    }
    return max;
}
}
int main()
{
    int col = 2;
    int *A=(int*)malloc(sizeof(int)*2);
    int *acc=(int*)malloc(sizeof(int)*2);
    A.acc={{1,2,3},{3,2,1}};
    int size=sizeof(acc)/sizeof(int);
    int x= maximumWealth(&(acc),size,&col);
    printf("%d\n",x);
    return 0;
}