#include<bits/stdc++.h>
using namespace std;

int arr[100001];

int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int cnt=0;
    int cc=0;
    int l=0;
    int r=0;
    while(1)
    {
        if(l==n || r==n) break;
        if(cc+arr[r]<=t)
        {
            cc+=arr[r];
            r++;
        }
        else
        {
            while(1)
            {
                if(l==n) break;
                cc-=arr[l];
                l++;
                if(cc+arr[r]<=t) break;
            }
        }
        int mx=r-l;
        cnt=max(cnt,mx);
    }
    cout<<cnt<<endl;
}

