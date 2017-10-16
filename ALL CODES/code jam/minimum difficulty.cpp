#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int diff[n];
    diff[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>=1)
        {
            diff[i]=arr[i]-arr[i-1];
        }

    }
    sort(diff,diff+n);
    int ans=diff[n-1];
    int dd=INFINITY;
    for(int i=1;i<n-1;i++)
    {
        int d=arr[i+1]-arr[i-1];
        if(d<dd)
            dd=d;
    }
    if(dd>ans)
        ans=dd;
    cout<<ans<<endl;

}
