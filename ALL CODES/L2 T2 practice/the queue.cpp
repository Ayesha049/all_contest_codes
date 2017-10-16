#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ts,tf,t;
    cin>>ts>>tf>>t;
    int n;
    cin>>n;
    queue<int>q;
    int ans=-1;
    int lst,fst;
    cin>>fst;
    q.push(fst);
    for(int i=0; i<n-2; i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    cin>>lst;
    q.push(lst);
    int cc=ts;
    int flag=0;
    int mn=0;
    for(int i=0; i<n; i++)
    {
        int a=q.front();
        q.pop();
        if(a>cc)
        {
            ans=cc;
            flag=1;
            break;
        }
        else
        {
            cc+=t;
        }
        if(cc>tf)
            break;
    }
    if(flag==0)
    {
        if(lst+2*t<=tf)
        {
            ans=lst+t;
        }
        else
            ans=fst-1;
    }
    cout<<ans<<endl;
}
