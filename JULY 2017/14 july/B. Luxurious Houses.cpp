#include<bits/stdc++.h>
using namespace std;

int arr[100001];
int mx[100001][2];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int mxx=-1;
    map<int,int>mp;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>mxx)
        {
            mxx=arr[i];
        }

        mx[i][0]=mxx;
        mx[i][1]=mp[mxx];
        mp[mxx]++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mx[i][0]) cout<<(mx[i][0]-arr[i]+1)<<" ";
        else
        {
            if(mx[i][1]==0) cout<<"0"<<" ";
            else cout<<"1"<<" ";
        }
    }
    cout<<endl;

}

