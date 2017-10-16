#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[33];
    arr[1]=1;
    long long a=2;
    for(int i=2;i<=32;i++)
    {

        arr[i]=a;
        a*=2;
    }
    while(n--)
    {
        long long x;
        cin>>x;
        long long sum=(x*(x+1))/2;
        for(int i=1;i<=32;i++)
        {
            if(arr[i]>x) break;
            sum-=arr[i];
            sum-=arr[i];
            //cout<<arr[i]<<" ";
        }
        cout<<sum<<endl;
    }
}

