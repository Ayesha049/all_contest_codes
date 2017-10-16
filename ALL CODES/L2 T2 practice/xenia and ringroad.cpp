#include<bits/stdc++.h>
using namespace std;

int arr[100001];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>arr[i];
    int ini=1;
    int fpos;
    long long cnt=0;
    for(int i=1;i<=m;i++)
    {
        if(arr[i]>ini)
        {
            cnt+=(arr[i]-ini);
            ini=arr[i];
        }
        else if(arr[i]<ini)
        {
            cnt+=(arr[i]+(n-ini));
            ini=arr[i];
        }
    }
    cout<<cnt<<endl;
}
