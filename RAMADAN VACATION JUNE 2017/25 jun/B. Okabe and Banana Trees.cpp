#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,b;
    cin>>m>>b;
    long long mx=0;
    long long x=m*b;
    long long y=b;
    mx=(x*(x+1)/2);
    while(1)
    {
        x-=m;
        if(x<0) break;
        y=(b-(x/m));
        //cout<<x<<" "<<y<<endl;
        long long aa=(x*(x+1)/2);
        long long r=x;
        long long l=0;
        long long tmp=aa;
        while(l<y)
        {
            r++;
            long long xx=tmp-l;
            xx+=r;
            aa+=xx;
            tmp=xx;
            l++;
        }
        //cout<<aa<<endl;
        mx=max(mx,aa);
    }
    cout<<mx<<endl;
}

