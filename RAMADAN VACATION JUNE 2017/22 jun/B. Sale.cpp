#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<0) vc.push_back(a);
    }
    int sz=vc.size();
    m=min(m,sz);
    int ans=0;
    sort(vc.begin(),vc.end());
    for(int i=0;i<m;i++)
    {
        ans+=vc[i];
    }
    ans=abs(ans);
    cout<<ans<<endl;
}

