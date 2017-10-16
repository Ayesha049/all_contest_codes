#include<bits/stdc++.h>
using namespace std;

int arr[100000+1];
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {

        cin>>arr[i];

    }

    for(int i=n;i>=1;i--)
    {
        int a=arr[i];
        if(mp[a]==0)
        {
            mp[a]=1;
            cnt++;
        }
        arr[i]=cnt;
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        cout<<arr[a]<<endl;
    }
}

