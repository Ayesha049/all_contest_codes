#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n%2!=0) cout<<"0"<<endl;
    else
    {
        long long ans=n/4;
        if(n%4==0) ans--;
        cout<<ans<<endl;
    }
}
