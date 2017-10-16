#include<bits/stdc++.h>
using namespace std;

int arr[100001];

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

    }
    int cnt=0;
    int l=1,r=-1;
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        mp[arr[i]]+=1;
        if(mp[arr[i]]==1)
        {
            cnt++;
        }
        else
        {
            if(arr[i]==arr[l])
            {
                while(1)
                {

                    mp[arr[l]]--;
                    l++;
                    if(mp[arr[l]]==1) break;
                }
            }
        }
        if(cnt==k)
        {
            flag=1;
            r=i;
            break;
        }
        //cout<<cnt<<endl;
    }
    if(flag==0)
    {
        l=-1;
        r=-1;
    }
    cout<<l<<" "<<r<<endl;
}
