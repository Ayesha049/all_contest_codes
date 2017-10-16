
#include<bits/stdc++.h>
using namespace std;

map<long long,long long>mp;



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
    long long fun[mx+1];
    fun[0]=0;
    fun[1]=mp[1];
    for(int i=2; i<=mx; i++)
    {
        fun[i]=max(fun[i-1],(fun[i-2]+mp[i]*i));
    }


    cout<<fun[mx]<<endl;



}
