#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    char s[10];
    cin>>s;
    int l=strlen(s);
    int a,b,x,sum;
    x=1;
    sum=0;
    for(int i=l-1;i>=0;i--)
    {
        a= (int)(s[i]-64);
        b=x*a;
        x=x*26;
        sum=sum+b;
    }
    cout<<sum;
}
