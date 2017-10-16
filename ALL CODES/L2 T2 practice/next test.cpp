#include<bits/stdc++.h>
using namespace std;

int arr[3000];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>(i+1))
        {
            flag=1;
            cout<<i+1<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n+1<<endl;
    }
}
