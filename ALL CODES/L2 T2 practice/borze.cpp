#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ans[201];
    cin>>s;
    int j=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            ans[j++]='0';
            s[i]='*';
        }
        if(s[i]=='-')
        {
            if(s[i+1]=='.')
                ans[j++]='1';
            else
                ans[j++]='2';
            s[i]='*';
            s[i+1]='*';
        }


    }
    ans[j]='\0';
    cout<<ans<<endl;
}
