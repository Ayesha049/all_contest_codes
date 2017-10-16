#include<bits/stdc++.h>
using namespace std;

map<long long,long long>mp;
long long memo[100001];


long long fun(int i)
{
    if(i==0)
        return 0;
    if(i==1)
        return mp[1];
    if(memo[i]==0)
        memo[i]=max(fun(i-1),fun(i-2)+mp[i]*i);
    return memo[i];
}

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    long long mx=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        if(arr[i]>mx)
            mx=arr[i];
    }
    if(mp.size()==1)
        cout<<(mp.begin()->first)*(mp.begin()->second)<<endl;
    else
        cout<<fun(mx)<<endl;



}
