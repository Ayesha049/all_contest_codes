#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long mn,mx;
    mn=arr[1]-arr[0];
    mx=arr[n-1]-arr[0];
    cout<<mn<<" "<<mx<<endl;
    for(int i=1;i<n-1;i++)
    {
        long long a,b;
        a=arr[i]-arr[i-1];
        b=arr[i+1]-arr[i];
        mn=min(a,b);
        a=arr[i]-arr[0];
        b=arr[n-1]-arr[i];
        mx=max(a,b);
        cout<<mn<<" "<<mx<<endl;
    }
    mn=arr[n-1]-arr[n-2];
    mx=arr[n-1]-arr[0];
    cout<<mn<<" "<<mx<<endl;

}
