#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]+=1;
        }
        else
        {
            cout<<s<<mp[s]<<endl;
            mp[s]+=1;;
        }
    }
}
