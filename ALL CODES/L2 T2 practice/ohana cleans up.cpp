#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    vector<string>vt;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(mp[a]==0)
        {
            vt.push_back(a);
        }
        mp[a]++;

    }
    string winner=vt[0];
    for(int i=0;i<vt.size();i++)
    {
        if(mp[vt[i]]>mp[winner])
            winner=vt[i];
    }
    cout<<mp[winner]<<endl;
}
