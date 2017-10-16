#include<iostream>
using namespace std;

int main()
{
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    n=n%4;
    //cout<<n<<endl;
    if(n==0)
    {
        cout<<"0"<<endl;
    }
    else if(n==3)
    {
        long long x=c*3;
        long long y;
        y=b+c;
        long long minn=9000000000;
        if(x<=minn)
        {
            minn=x;
        }
        if(y<=minn)
        {
            minn=y;
        }
        if(a<=minn)
        {
            minn=a;
        }
        cout<<minn<<endl;
    }
    else if(n==2)
    {
        long long x=a*2;
        long long y=c*2;
        long long minn=9000000000;
        if(x<=minn)
        {
            minn=x;
        }
        if(y<=minn)
        {
            minn=y;
        }
        if(b<=minn)
        {
            minn=b;
        }
        cout<<minn<<endl;

    }
    else if(n==1)
    {
        long long x=a*3;
        long long y;
        y=a+b;
        long long minn=9000000000;
        if(x<=minn)
        {
            minn=x;
        }
        if(y<=minn)
        {
            minn=y;
        }
        if(c<=minn)
        {
            minn=c;
        }
        cout<<minn<<endl;

    }
}
