#include<iostream>
#include<cstdio>
using namespace std;

// Reverse Sort=> insertion sort
void reverseSort(int* arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}

void print(int *arr,int size)
{
    cout<<"The array is: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={11,2,4,13,9,6};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    reverseSort(arr,size);
    print(arr,size);

    return 0; 
}