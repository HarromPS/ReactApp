#include<iostream>
#include<cstdio>
using namespace std;
int reverse(int n){
    int rev=0,rem=0;
    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    return rev;
}
int main(){
    int n=13;
    int result =reverse(n);
    cout<<result;
    return 0; 
}