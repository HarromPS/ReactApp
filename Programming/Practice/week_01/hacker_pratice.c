#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int num;
    scanf("%d",&num);
    char arr[num];
    for(int i=0;i<9;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[1];
    for(int i=0;i<9;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    int m=max;
    int freq[m];
    for(int i=0;i<m;i++){
        freq[i]=0;
    }
    for(int i=0;i<num;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<num;i++){
        printf("%d ",freq[i]);
    }
    return 0;
}
