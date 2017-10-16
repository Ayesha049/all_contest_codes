#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int mn=abs(arr[1]-arr[n]);
    int a=1,b=n;
    for(int i=1;i<n;i++)
    {
        int aa=abs(arr[i]-arr[i+1]);
        if(aa<mn)
        {
            mn=aa;
            a=i;
            b=i+1;
        }
    }
    cout<<a<<" "<<b<<endl;
}

