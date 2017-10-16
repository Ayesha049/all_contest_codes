#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int mx=1;
    int prev=-1;
    int last=-1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            last=i;
            int xx=last-prev;
            mx=max(mx,xx);
            //cout<<xx<<" "<<s[i]<<endl;
        }
        prev=last;
    }
    int zz=(s.length()-last);
    //cout<<zz<<endl;
    mx=max(mx,zz);
    cout<<mx<<endl;
}

