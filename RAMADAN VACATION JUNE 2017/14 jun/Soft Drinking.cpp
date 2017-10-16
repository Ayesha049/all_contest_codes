#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(k*l)/nl;
    int b=c*d;
    b=min(a,b);
    int cc=p/np;
    b=min(b,cc);
    int ans=b/n;
    cout<<ans<<endl;
}



