#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector< pair<int,int> > vt;
    pair<int,int>pr[n];
    for(int i=0;i<n;i++)
    {
        cin>>pr[i].first;
        cin>>pr[i].second;
    }
    sort(pr,pr+n);
    int flag=0;

    for(int i=1;i<n;i++)
    {
        if(pr[i-1].first<pr[i].first && pr[i-1].second>pr[i].second)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
        cout<<"Poor Alex"<<endl;
}
