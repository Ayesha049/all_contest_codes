
#include<bits/stdc++.h>
using namespace std;
int flag[10];

int main()
{
    string s;
    cin>>s;
    string t= "CODEFORCES";
    int xx=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==t[xx])
        {
            flag[xx]=1;
            xx++;
        }
        else break;
    }
    xx=9;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]==t[xx])
        {
            flag[xx]=1;
            xx--;
        }
        else break;
    }
    int f=0;
    for(int i=0;i<10;i++) f+=flag[i];
    if(f==10) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
