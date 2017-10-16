#include<bits/stdc++.h>
using namespace std;
int arr[100000+1];
int main()
{
    int n;
    cin>>n;
    int cnt=1;
    int mx=1;
    cin>>arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[i-1]) cnt++;
        else cnt=1;
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
}

