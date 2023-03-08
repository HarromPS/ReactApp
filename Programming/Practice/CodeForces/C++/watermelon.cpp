#include<iostream>
#include<cstdio>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        int i=0,j=0;
        int add[4];
        string str=address;
        while(address[i] != '\0')
        {
            if(address[i]=='.'){
                add[j]=i;
                j++;
            }
            i++;
        }
        str=address.substr(0,add[0])+"[.]"+address.substr(add[0]+1,add[1])+"[.]"+address.substr(add[1]+1,add[2])+"[.]"+address.substr(add[2]+1,add[3])+"[.]"+address.substr(add[3]+1,address.length());
        // str=address.substr(0,i)+"[.]"+address.substr(i+1,address.length());
        return str;

    }
};
int main(){

Solution s;
string a=s.defangIPaddr("255.100.50.0");
cout<<a<<endl;
    // int w;
    // cin>>w;
    // if(w%2!=0){
    //     cout<<"NO"<<endl;
    //     return 0;
    // }
    // else {
    //     int x,y;
    //     x=w/2;
    //     y=w-x;
    //     if()
    // }
    return 0;
}