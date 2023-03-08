#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize){
    int i=seats[0];
    int j=students[0];
    int k;
}

int main(){
    int seats[]={4,1,5,9};
    int stud[]={1,3,2,6};
    int size1=sizeof(seats)/sizeof(int);
    int size2=sizeof(stud)/sizeof(int);
    int r=minMovesToSeat(seats,size1,stud,size2);
    printf("%d\n",r);
    return 0; 
}