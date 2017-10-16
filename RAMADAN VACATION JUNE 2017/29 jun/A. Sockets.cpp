#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int cnt=0;
    m-=k;
    while(m>0)
    {
        if(cnt==n)
        {
            cnt=-1;
            break;
        }
        m++;
        m-=arr[cnt++];
        k--;
    }
    cout<<cnt<<endl;
}

