#include<bits/stdc++.h>
using namespace std;

int arr[200000+2];
int arr1[200000+2];
int main()
{
    int n,k,q;
    cin>>n>>k>>q;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr1[a]++;
        arr1[b+1]--;
    }
    int sum=0;
    int ss=0;
    for(int i=1; i<=200000; i++)
    {
        sum+=arr1[i];
        arr1[i]=sum;
        if(sum>=k)
        {
            arr[i]=1;
        }
        ss+=arr[i];
        arr[i]=ss;

    }
    for(int i=0; i<q; i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<endl;
    }
}

