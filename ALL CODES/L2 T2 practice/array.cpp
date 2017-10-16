#include<bits/stdc++.h>
using namespace std;

int arr[100001];

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    int cnt=0;
    int l=-1,r=-1;
    for(int i=1;i<=n;i++)
    {
        mp[arr[i]]+=1;
        if(mp[arr[i]]==1)
        {
            cnt++;
        }
        if(cnt==k)
        {
            for(l=1;l<n;l++)
            {
                if(arr[l]!=arr[l+1])
                    break;
            }
            r=i;
            break;
        }
    }
    cout<<l<<" "<<r<<endl;
}
