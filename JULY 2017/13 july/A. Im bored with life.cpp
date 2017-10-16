#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    int ans=1;
    for(int i=2;i<=x;i++) ans*=i;
    cout<<ans<<endl;
}

