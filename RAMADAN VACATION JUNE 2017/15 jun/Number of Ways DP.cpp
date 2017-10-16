#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    long long arr[n+1];
    long long s=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }

    if(s%3!=0)
        cout<<"0"<<endl;
    else
    {
        s/=3;
        long long ss=0;
        int cnt[n];
        for(int i=n-1;i>=0;i--)
        {
            ss+=arr[i];
            if(ss==s)
                cnt[i]=1;
        }
        for(int i=n-2;i>=0;i--)
        {
            cnt[i]+=cnt[i+1];
        }
        long long ans=0;
        ss=0;
        for(int i=0;i<n-2;i++)
        {
            ss+=arr[i];
            if(ss==s)
                ans+=cnt[i+2];
        }
        cout<<ans<<endl;
    }
}
