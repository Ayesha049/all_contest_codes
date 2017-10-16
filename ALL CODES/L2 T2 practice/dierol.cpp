#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int maxx;
    if(a>b)
        maxx=a;
    else
        maxx=b;
    int x=7-maxx;
    a=gcd(x,6);
    int y=6/a;
    x=x/a;
    cout<<x<<"/"<<y<<endl;
}
