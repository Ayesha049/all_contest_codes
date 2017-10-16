#include<bits/stdc++.h>
using namespace std;
/*
int arr[150000+1];
int sum[15000+1];
int main()
{
    int n,k;
    cin>>n>>k;
    int sm=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sm+=arr[i];
        arr[i]=sm;
    }
    for(int i=k;i<=n;i++)
    {
        //cout<<sum[i]<<" ";
        sum[i]=arr[i]-arr[i-k];
    }

    int ans=INFINITY;
    int ind=0;
    for(int i=k;i<=n;i++)
    {
        //cout<<sum[i]<<" ";
        if(sum[i]<ans)
        {
            ans=sum[i];
            ind=i-k;
        }
    }
    cout<<ind+1<<endl;

}*/
int main()
{
    int n,k;
    cin>>n>>k;
    int dp[150001];
    dp[0] = 0;
    int pos = -1;
    int mx = INT_MAX;
    for (int i=1; i<=n; i++) {
        int t;
        cin>>t;
        dp[i] = dp[i-1] + t;
    }
    for (int i=1; i<=n; i++) {
        if(i>=k && dp[i]-dp[i-k] < mx) {
            mx = dp[i] - dp[i-k];
            pos = i-k+1;
        }
    }
    cout << pos;
    return 0;
}
