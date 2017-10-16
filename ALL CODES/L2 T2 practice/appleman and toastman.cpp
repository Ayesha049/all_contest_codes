#include<bits/stdc++.h>
using namespace std;

int arr[300000];
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    long long ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(n==1)
        cout<<arr[0]<<endl;
    else
    {
        sort(arr,arr+n);
        for(int i=0; i<n-2; i++)
        {
            ans+=(2*sum);
            sum-=arr[i];
        }
        ans=ans+arr[n-1]+arr[n-2];
        cout<<ans<<endl;
    }

}
