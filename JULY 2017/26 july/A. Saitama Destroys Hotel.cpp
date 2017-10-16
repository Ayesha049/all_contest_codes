#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int prev=s;
    int t=0;
    vector<pair<int,int> >vc;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vc.push_back(make_pair(a,b));
    }
    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());
    for(int i=0;i<n;i++)
    {
        t+=(prev-vc[i].first);
        if(vc[i].second>t) t+=(vc[i].second-t);
        prev=vc[i].first;

    }
    t+=prev;
    cout<<t<<endl;
}

