#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    for(int i=1; i<=100; i++)
    {
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%i!=0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            if(i>ans)
                ans=i;
        }
    }
    ans*=n;
    cout<<ans<<endl;
}
