#include<bits/stdc++.h>
using namespace std;

long long arr[100000][2];
int dp[100000];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];
    int cnt=1;
    for(int i=1;i<n-1;i++)
    {
        if(dp[i-1]==0)
        {
            if(arr[i][0]-arr[i][1]>arr[i-1][0]) cnt++;
            else
            {
                if(arr[i][0]+arr[i][1]<arr[i+1][0])
                {
                    cnt++;
                    dp[i]=1;
                }
            }
        }
        else
        {
            if((arr[i][0]-arr[i][1])>(arr[i-1][0]+arr[i-1][1])) cnt++;
            else
            {
                if(arr[i][0]+arr[i][1]<arr[i+1][0])
                {
                    cnt++;
                    dp[i]=1;
                }
            }
        }
    }
    if(dp[n-2]==0) cnt++;
    else if(arr[n-2][0]+arr[n-2][1]<arr[n-1][0]) cnt++;
    if(n==1) cnt=1;
    cout<<cnt<<endl;
}

