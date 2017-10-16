#include<bits/stdc++.h>
using namespace std;

int arr[500];

int main()
{
    int n,k;
    cin>>n>>k;
    int walk=0;
    cin>>arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(k>(arr[i]+arr[i-1]))
        {
            walk+=k-(arr[i]+arr[i-1]);
            arr[i]+=(k-(arr[i]+arr[i-1]));
        }
    }
    cout<<walk<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
