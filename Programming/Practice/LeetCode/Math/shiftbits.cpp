#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=10;
    a=a>>1; // bit shift to left by one => 1010 -> 0101
    cout<<a<<endl;
    a=a<<1; // bit shift to right by one => 0101 -> 1010
    cout<<a<<endl;

    return 0;
}