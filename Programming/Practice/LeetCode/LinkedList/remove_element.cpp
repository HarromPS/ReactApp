#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1;
    vec1.push_back(12);
    vec1.push_back(12);
    vec1.push_back(13);
    vec1.push_back(14);
    vec1.push_back(14);
    vec1.push_back(14);
    vec1.push_back(15);
    vec1.push_back(16);
    // cout<<vec1.size()<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        // for(int j=0;j<)
        if(vec1[i]==vec1[i+1])
        {   
            // cout<<vec1[i]<<endl;
            vec1.erase(vec1.begin()+i);
        }
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<vec1.size();i++)
    {
       
            cout<<vec1[i]<<" ";
        
    }
    cout<<endl;
    return 0; 
}