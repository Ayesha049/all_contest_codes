#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        int l=0;
        int r=0;
        for(int i=0;i<(n/2);i++) l+=(s[i]-48);
        for(int i=n/2;i<n;i++) r+=(s[i]-48);
        if(l!=r) flag=1;
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

