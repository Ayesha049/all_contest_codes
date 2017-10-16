#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    vector<pair<int,int> > pos;
    vector<pair<int,int> > neg;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>0) pos.push_back(make_pair(a,b));
        else neg.push_back(make_pair(a,b));
    }
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    reverse(neg.begin(),neg.end());
    int s1=pos.size();
    int s2=neg.size();
    int a=0,b=0;
    while(1)
    {
        if(a==s1 || b==s2) break;
        cnt+=pos[a].second;
        cnt+=neg[b].second;
        a++;
        b++;

    }
    if(s1==a)
    {
        if(s2!=b)
            cnt+=neg[b].second;
    }
    if(s2==b)
    {
        if(s1!=a)
            cnt+=pos[a].second;
    }
    cout<<cnt<<endl;

}

