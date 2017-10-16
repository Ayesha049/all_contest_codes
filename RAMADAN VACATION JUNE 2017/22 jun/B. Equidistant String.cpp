#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    string a;
    int cnt=0;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            cnt++;
            if(flag==0)
            {
                flag=1;
                a+=s[i];
            }
            else
            {
                flag=0;
                a+=t[i];
            }
        }
        else a+=s[i];
    }
    if(cnt%2==0) cout<<a<<endl;
    else cout<<"impossible"<<endl;
}

