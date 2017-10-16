#include<bits/stdc++.h>
using namespace std;

int mn(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

int mx(int a,int b)
{
    if(a<b)
        return b;
    return a;
}


int main()
{
    string s;
    cin>>s;
    int c1=1;

    int cnt=0;

    for(int i=0;i<s.length();i++)
    {
        int c2=s[i];
        c2-=96;
        int a=mn(c1,c2);
        int b=mx(c1,c2);
        int xx=(b-a);
        int yy=(26-b)+a;
        cnt=cnt+mn(xx,yy);
        c1=c2;
    }

    cout<<cnt<<endl;
}

