#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    double l;
    double arr[1000];
    cin>>n>>l;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double mx=0;
    mx=arr[0]*2;
    if(((l-arr[n-1])*2)>mx)
        mx=((l-arr[n-1])*2);
    for(int i=0; i<n-1; i++)
    {
        //cout<<arr[i]<<" ";
        double a=arr[i+1]-arr[i];
        if(a>mx)
            mx=a;

    }
    double ans=mx/2;
    printf("%.10lf\n",ans);

}
