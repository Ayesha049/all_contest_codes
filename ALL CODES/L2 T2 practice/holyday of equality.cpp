#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
            mx=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mx)
            cnt+=(mx-arr[i]);
    }
    cout<<cnt<<endl;
}
