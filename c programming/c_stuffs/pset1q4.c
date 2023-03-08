#include<stdio.h>

int main(){
    //converting celcius to farenheit
    float cel,fh;
    printf("Degree Celcius=");
    scanf("%f",&cel);
    fh=(cel * 9 / 5)+32 ;
    printf("Temperature in Farenheit is %f\n",fh); 
    
  
    return 0; 
}