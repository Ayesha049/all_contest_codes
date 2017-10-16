#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int cnt=0;
    long long ans=-1;
    for(long long int i=1;i*i<=n;i++)
    {
        if(n%i==0)
            cnt++;
        if(cnt==k)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
