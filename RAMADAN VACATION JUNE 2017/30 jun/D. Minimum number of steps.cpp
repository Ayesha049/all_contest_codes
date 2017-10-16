#include<bits/stdc++.h>
using namespace std;

int c,d,i,n,m,k,x,j=1000000007;
string s;
main()
{
    cin>>s;
    for(i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='b')c++;
        else
        {
            k+=c;
            c*=2;
            k%=j;
            c%=j;
        }
    }
    cout<<k;
}
