#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long ans=max(abs(a-c),abs(b-d));
    cout<<ans<<endl;
}

