#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]==s[i])
        {
            dp[i]=dp[i-1]+1;
        }
        else
        {
            dp[i]=dp[i-1];
        }
    }
    dp[n]=dp[n-1];
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<dp[b-1]-dp[a-1]<<endl;
    }
}
