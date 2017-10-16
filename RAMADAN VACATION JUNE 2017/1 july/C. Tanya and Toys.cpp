#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    vector<int>ans;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        mp[a]=1;
    }
    n=m;
    for(int i=1;i<=n;i++)
    {
        if(i>m) break;
        if(mp[i]==0)
        {
            if(i<=m)
            {
                ans.push_back(i);
                m-=i;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";

}

