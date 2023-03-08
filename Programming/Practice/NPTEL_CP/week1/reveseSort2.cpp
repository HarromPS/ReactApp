#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long int 
#define vint vector<int>
#define vll vector<long long int>

int reverseSort(vint &L)
{
    int cost;
    for(int i=0;i<L.size()-1;i++)
    {
        int minimum=*min_element(L.begin()+i,L.end());
        auto x=(L.begin(),L.end(),minimum);
        reverse(L.begin()+i,x+1);
        cost+=distance(L.begin(),x)-i+1;
    }
    return cost;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif

    std ::ios::sync_with_stdio(false);
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n;
        cin>>n;

        vint L;
        for(int j=0;j<n;j++)
        {
            int num;
            cin>>num;
            L.push_back(num);
        }
    cout<<"Case #"<<i<<": "<<(reverseSort(L))<<endl;
    }
    return 0; 
}