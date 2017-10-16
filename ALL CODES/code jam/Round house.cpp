#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=a+b+c;
    ans=ans%a;
    if(ans==0) ans=a;
    if(ans<0) ans+=a;
    cout<<ans<<endl;

}

