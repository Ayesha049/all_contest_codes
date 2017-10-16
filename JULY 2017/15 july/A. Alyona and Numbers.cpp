#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    long long arr[6];
    cin>>n>>m;
    long long a=max(m,n);
    long long b=min(m,n);
    long long xx=4;
    long long cnt=0;
    for(int i=1;i<5;i++)
    {
        long long aa=a-xx;
        arr[i]=(1+aa/5);
        if(aa<0) arr[i]=0;
        xx--;
        cnt+=arr[i];
    }
    cnt+=(a/5);
    int r=b%5;
    long long ans=0;
    for(int i=1;i<=r;i++) ans+=arr[i];
    ans+=(cnt*(b/5));
    cout<<ans<<endl;
}

