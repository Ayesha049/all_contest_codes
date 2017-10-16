#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    unsigned long long a=max(l1,l2);
    unsigned long long b=min(r1,r2);
    unsigned long long ans;
    if(b<a) ans=0;
    else
    {
        ans=(b-a);
        if(k<a || k>b) ans++;
    }
    cout<<ans<<endl;

}

