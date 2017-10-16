#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vc.push_back(a);
    }
    sort(vc.begin(),vc.end());
    int sz=vc.size();
    int cnt=0;
    while(1)
    {
        vector<int>v;
        int flag=0;
        for(int i=0; i<sz-1; i++)
        {
            if(vc[i+1]>vc[i])
            {
                cnt++;
                flag=1;
            }
            else v.push_back(vc[i]);
        }
        if(flag==0) break;
        sz=v.size();
        if(sz==0) break;
        vc.clear();
        for(int i=0;i<sz;i++) vc.push_back(v[i]);
    }
    cout<<cnt<<endl;
}

