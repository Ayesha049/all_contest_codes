#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[1001];
    cin>>n;
    int mn=100000,mx=0;
    cin>>arr[1];
    mn=arr[1];
    mx=arr[1];
    int cnt=0;

    for(int i=2; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]<mn)
            {
                mn=arr[i];
                cnt++;
            }
            if(arr[i]>mx)
            {
                mx=arr[i];
                cnt++;
            }
        }

    }
    cout<<cnt<<endl;

}
