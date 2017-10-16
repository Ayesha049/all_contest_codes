#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag1=0;
    int flag2=0;
    string s;
    cin>>s;
    string s1=s;
    int a= s.find("AB");
    if(a==-1)
        flag1=1;
    else
    {
        s[a]='*';
        s[a+1]='*';
        a=s.find("BA");
        if(a==-1)
            flag1=1;
    }

    a= s1.find("BA");
    if(a==-1)
        flag2=1;
    else
    {
        s1[a]='*';
        s1[a+1]='*';
        a=s1.find("AB");
        if(a==-1)
            flag2=1;
    }

    if(flag1==0 || flag2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
