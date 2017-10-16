#include<bits/stdc++.h>
using namespace std;

long long arr[300001];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long cnt=0;
    for(int i=1;i<=n;i++)
    {
        long long xx=abs(arr[i-1]-i);
        cnt+=xx;
    }
    cout<<cnt<<endl;
}
