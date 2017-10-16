#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[51];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int mn=10000;
    for(int i=0;(i-1+m)<n;i++)
    {
        //cout<<arr[i]<<endl;
        if(mn>(arr[i+m-1]-arr[i]))
            mn=arr[i+m-1]-arr[i];
    }
    cout<<mn<<endl;
}
