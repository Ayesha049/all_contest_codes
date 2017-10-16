#include<bits/stdc++.h>
using namespace std;
long long arr[100000+1];
long long ans[100000+1];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    ans[n]=arr[n];
    for(int i=n-1;i>=1;i--)
        ans[i]=(arr[i]+arr[i+1]);
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
}

