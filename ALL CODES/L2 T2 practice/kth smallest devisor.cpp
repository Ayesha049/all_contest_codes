#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<long long int>arr;
    long long int n,ans;
    int k;
    cin>>n>>k;
    int cnt=0;
    for(long long int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            arr.push_back(i);
            if((n/i)!=i)
            {
                arr.push_back(n/i);
                cnt++;
            }
            cnt++;
        }

    }
    sort(arr.begin(),arr.end());
    if(arr.size()<k)
        ans=-1;
    else
        ans=arr[k-1];
    cout<<ans<<endl;
}
