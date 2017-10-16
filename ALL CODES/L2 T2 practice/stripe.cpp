#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        arr[i]=sum;
    }
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        //cout<<arr[i]<<" "<<arr[n]-arr[i]<<endl;
        if(arr[i]==arr[n]-arr[i])
            cnt++;
    }
    cout<<cnt<<endl;
}
