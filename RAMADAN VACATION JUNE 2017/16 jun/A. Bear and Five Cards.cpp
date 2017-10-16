#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    map<int,int>mp;
    int sum=0;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        sum+=arr[i];
        if(mp[arr[i]]>3) mp[arr[i]]=3;
    }
    sort(arr,arr+5);
    reverse(arr,arr+5);
    int mn=sum;
    for(int i=0; i<5; i++)
    {
        if(mp[arr[i]]>=2)
        {
            int a=sum-(mp[arr[i]]*arr[i]);
            mn=min(mn,a);
        }
    }
    cout<<mn<<endl;
}

