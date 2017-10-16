#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]>d)
                break;
            else
                cnt++;
        }
    }
    cnt*=2;
    cout<<cnt<<endl;
}
