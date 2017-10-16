#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x;
    cin>>x;
    vector<long long>vc;
    long long a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vc.push_back(a);
    }
    sort(vc.begin(),vc.end());
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(x>1)
        {
            ans+=vc[i]*x;
            x--;
        }
        else ans+=vc[i];
    }
    cout<<ans<<endl;
}

