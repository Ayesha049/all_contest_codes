#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    b/=2;
    c/=4;
    int num=min(a,min(b,c));
    int ans= num*7;
    cout<<ans<<endl;
}
