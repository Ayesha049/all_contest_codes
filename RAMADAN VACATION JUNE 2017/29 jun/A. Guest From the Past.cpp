#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long p,g,r;
    cin>>p>>g>>r;
    long long a=g-r;
    long long cnt=0;
    if(p<=a || g>n) cnt=n/p;
    else
    {
        cnt+=(n-r)/(g-r);
        long long aa=cnt*(g-r);
        n-=aa;
        cnt+=n/p;
    }
    if(cnt<0) cnt=0;
    cout<<cnt<<endl;
}

