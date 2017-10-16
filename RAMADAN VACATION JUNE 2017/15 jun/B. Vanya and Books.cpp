#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long cnt=0;
    if(n<10)
    {
        cnt+=n;
    }
    else if(n<100)
    {
        cnt=9;
        cnt+=(2*(n-9));
    }
    else if(n<1000)
    {
        cnt=189;
        cnt+=(3*(n-99));
    }
    else if(n<10000)
    {
        cnt=2889;
        cnt+=(4*(n-999));
    }
    else if(n<100000)
    {
        cnt=38889;
        cnt+=(5*(n-9999));
    }
    else if(n<1000000)
    {
        cnt=488889;
        cnt+=(6*(n-99999));
    }
    else if(n<10000000)
    {
        cnt=5888889;
        cnt+=(7*(n-999999));
    }
    else if(n<100000000)
    {
        cnt=68888889;
        cnt+=(8*(n-9999999));
    }
    else if(n<1000000000)
    {
        cnt=788888889;
        cnt+=(9*(n-99999999));
    }
    else
    {
        cnt=8888888889;
        cnt+=(10*(n-999999999));
    }
    cout<<cnt<<endl;
}

