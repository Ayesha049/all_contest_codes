#include<bits/stdc++.h>
using namespace std;

long long arr[300000];
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
        ans=(sum*2);
        for(int i=0; i<n-2; i++)
        {
            sum-=arr[i];
            ans+=sum;
            //cout<<sum<<" ";
        }

        cout<<ans<<endl;
    }

}
