#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    map<int,int>mp;
    map<int,int>fs;
    map<int,int>ls;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(mp[arr[i]]==0)
        {
            fs[arr[i]]=i;
            vc.push_back(arr[i]);
            cnt++;
        }
        mp[arr[i]]++;
        ls[arr[i]]=i;
    }
    if(cnt==n) cout<<"1 1"<<endl;
    else
    {
        int mx=0;
        for(int i=0; i<cnt; i++)
        {
            mx=max(mx,mp[vc[i]]);
        }
        vector<int>p;
        for(int i=0; i<cnt; i++)
        {
            if(mp[vc[i]]==mx) p.push_back(vc[i]);
        }
        int l=0;
        int r=n-1;
        for(int i=0; i<p.size(); i++)
        {
            int xx=p[i];
            int ll,rr;
            ll=fs[xx];
            rr=ls[xx];
            int d1,d2;
            d1=rr-ll;
            d2=r-l;
            if(d1<d2)
            {
                l=ll;
                r=rr;
            }
        }
        l++;
        r++;
        cout<<l<<" "<<r<<endl;
    }

}

