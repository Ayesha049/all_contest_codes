#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long cnt=0;
    while(1)
    {

        long long aa= max(a,b);
        long long bb= min(a,b);
        long long x=aa/bb;
        cnt+=x;
        a=aa-(bb*x);
        b=bb;
        if(a==0 || b==0) break;
        //cout<<aa<<" "<<bb<<" "<<x<<" "<<cnt<<" "<<a<<" "<<b;
    }
    cout<<cnt<<endl;
}
