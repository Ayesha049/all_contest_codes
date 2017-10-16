#include<bits/stdc++.h>
using namespace std;

long long arr[1000000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n/2;i++)
    {
        if(i%2==1)
        {
            long long temp=arr[i];
            arr[i]=arr[n-i+1];
            arr[n-i+1]=temp;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
