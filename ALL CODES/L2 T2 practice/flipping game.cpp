#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[101];
    int sum[101];
    int sm=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        sm+=arr[i];
        sum[i]=sm;
    }
    int mx=0;
    for(int i=1; i<=n; i++)
    {

        for(int j=i; j<=n; j++)
        {
            int cnt=0;
            if(i>1)
            {
                cnt=sum[i-1];
            }
            cnt+=(sum[n]-sum[j]);
            int a=sum[n]-cnt;
            a=(j-i+1)-a;
            cnt+=a;
            if(cnt>mx)
            {
                mx=cnt;
            }
        }
    }
    cout<<mx<<endl;
}
