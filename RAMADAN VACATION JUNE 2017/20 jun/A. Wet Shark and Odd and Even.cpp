#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long ans=0;
    long long odd=0;
    vector<long long>vc;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        if(a%2==0) ans+=a;
        else
        {
            odd+=a;
            vc.push_back(a);
        }
    }
    sort(vc.begin(),vc.end());
    if(vc.size()%2==0) ans+=odd;
    else ans+=(odd-vc[0]);
    cout<<ans<<endl;

}

