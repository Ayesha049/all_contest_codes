#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>vc;
    long long a;
    map<long long,long long>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vc.push_back(a);
        mp[a]++;
    }
    sort(vc.begin(),vc.end());
    long long ans;
    long long dif=vc[vc.size()-1]-vc[0];
    if(dif==0)
    {
        ans=(n*(n-1))/2;
    }
    else ans=mp[vc[0]]*mp[vc[vc.size()-1]];
    cout<<dif<<" "<<ans<<endl;

}

