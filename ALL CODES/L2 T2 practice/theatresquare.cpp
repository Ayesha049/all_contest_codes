#include<iostream>
using namespace std;

int main()
{
    unsigned long long n,m,a,x,y;
    cin>>n>>m>>a;
    if(n%a==0)
       x=n/a;
    else
        x=(n/a)+1;
     if(m%a==0)
       y=m/a;
    else
        y=(m/a)+1;

    unsigned long long ans=x*y;
    cout<<ans;

}
