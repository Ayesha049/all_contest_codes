#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vc.push_back(a);
    }
    int flag=0;
    int i=0;
    while(1)
    {
        if(i==(n-1)) break;
        if(vc[i]>=vc[i+1]) break;
        i++;
    }
    while(1)
    {
        if(i==(n-1)) break;
        if(vc[i]!=vc[i+1]) break;
        i++;
    }
    while(1)
    {
        if(i==(n-1)) break;
        if(vc[i]<=vc[i+1]) break;
        i++;
    }
    if(i==(n-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
