#include<stdio.h>
struct vector
{
    int x, y;
};

int main(){
        // Q1 Create a two dimesional vector in C using structure 
         
    struct vector v1,v2;
    v1.x=12;
    v1.y=23;
    printf("X dim is %d and Y dim is %d \n",v1.x,v1.y);

    v2.x=123;
    v2.y=45;
    printf("X dim is %d and Y dim is %d \n",v2.x,v2.y);
    
        
    
    return 0; 
}