#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    a--;
    b--;
    n--;
    string s;
    cin>>s;
    /*int x=abs(n-a);
    x=max(x,a);
    int cnt=0;
    for(int i=0; i<=x; i++)
    {
        if(a+i<=n)
        {
            if(s[a+i]==s[b]) break;
        }
        if(a-i>=0)
        {
            if(s[a-i]==s[b]) break;
        }
        cnt++;

    }
    cout<<cnt<<endl;*/
    if(s[a]==s[b]) cout<<"0"<<endl;
    else cout<<"1"<<endl;


}

