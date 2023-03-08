#include<iostream>
#include<cstdio>
#include<string>
#include<fstream>
using namespace std;
// Files in C++ using class objects 

int main(){
    // Reading in a file
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    ofstream write("Newfile.txt");
    write<<str<<" This is a line in NewFile"<<endl;

    // Writing in a file 
    // 1) Using a constructor    
    ifstream read("Newfile.txt");
    read>>str;
    // cout<<str<<endl;
    getline(read,str);  // writes in a file

    return 0; 
}