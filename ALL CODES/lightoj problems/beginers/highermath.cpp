#include<bits/stdc++.h>
using namespace std;

bool check(int a,int b,int c)
{
    long long x=a*a;
    long long y=b*b;
    long long z=c*c;
    if(x+y==z)
        return true;
    return false;
}

int main()
{
    int test;
    int xx;
    cin>>test;
    xx=0;
    while(test--)
    {
        xx++;
        int a,b,c;
        cin>>a>>b>>c;
        bool f1=check(a,b,c);
        bool f2=check(b,c,a);
        bool f3=check(c,a,b);
        if(f1==true || f2==true || f3==true)
        {
            cout<<"Case "<<xx<<": "<<"yes"<<endl;
        }
        else
            cout<<"Case "<<xx<<": "<<"no"<<endl;
    }
}
