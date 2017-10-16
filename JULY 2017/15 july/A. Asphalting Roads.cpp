#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mp1;
    map<int,int>mp2;
    vector<int>vc;
    for(int i=1;i<=(n*n);i++)
    {
        int a,b;
        cin>>a>>b;
        if(mp1[a]==0 && mp2[b]==0)
        {
            vc.push_back(i);
            mp1[a]=1;
            mp2[b]=1;
        }

    }
    for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
    cout<<endl;
}

