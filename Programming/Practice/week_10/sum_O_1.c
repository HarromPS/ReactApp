#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Sum of n natural numbers O(n), O(1).
int main(){
    printf("Enter the last number of your sum:\n");
    int n,sum=0;
    scanf("%d",&n);
    // O(n) ==> Runs in linear time
    // for(int i=1;i<=n;i++)
    // {
    //     sum+=i;
    // }

    // O(1)==> constant time running algorithm
    // sum=(n*(n+1))/2;
    printf("The sum of %d natural number is %d\n",n,sum);
    return 0; 
}