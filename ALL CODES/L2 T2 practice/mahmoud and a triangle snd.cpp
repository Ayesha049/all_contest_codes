#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{
    int flag=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n-2; i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


