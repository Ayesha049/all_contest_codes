#include<bits/stdc++.h>
using namespace std;

int getx(long long x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    long long n;
    cin>>n;
    long long mn=n+1;
    for(long long i=1;i<=90;i++)
    {
        long long x= sqrt((i*i/4)+n) - i/2;
        long long sx= getx(x);
        if((x*x+sx*x)==n)
        {
            mn=x;
            //cout<<i<<" "<<x<<" "<<sx<<" "<<mn<<endl;
            break;
        }
    }
    if(mn>n) cout<<"-1"<<endl;
    else cout<<mn<<endl;
}

