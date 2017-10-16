#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.find("0")==-1)
    {
        for(int i=0;i<s.length()-1;i++)
        {
            cout<<s[i];
        }
    }
    else
    {
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(flag==0)
            {
                if(s[i]=='0') flag=1;
                else cout<<s[i];
            }
            else cout<<s[i];
        }
    }
}

