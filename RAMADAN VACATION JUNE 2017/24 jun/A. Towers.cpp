#include<bits/stdc++.h>
using namespace std;

int arr[1001];
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int mx=1;
    int d=0;
    for(int i=0; i<n; i++)
    {
        if(mp[arr[i]]==1) d++;
        else
        {
            if(mp[arr[i]]!=0)
            {
                mx=max(mx,mp[arr[i]]);
                d++;
                mp[arr[i]]=0;
            }

        }
    }
    cout<<mx<<" "<<d<<endl;

}

