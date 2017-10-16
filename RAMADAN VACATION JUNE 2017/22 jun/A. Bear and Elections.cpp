#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx=0;
    map<int,int>mp;
    int b;
    cin>>b;
    mx=b;
    mp[b]++;
    for(int i=1; i<n; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
        mx=max(mx,a);
    }
    if(mx==b && mp[mx]==1) cout<<"0"<<endl;
    else
    {
        int cnt=0;
        if(b==mx) mp[mx]--;
        while(b<=mx)
        {
            int aa=mp[mx];
            b+=aa;
            mx--;
            mp[mx]+=aa;
            cnt+=aa;
            //cout<<mx<<" "<<b<<endl;;
        }
        if(b-mx!=1)
        {
            int cc=b-mx-2;
            cnt-=cc;
        }
        cout<<cnt<<endl;
    }
}

