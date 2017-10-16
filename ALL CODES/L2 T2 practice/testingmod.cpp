#include<bits/stdc++.h>
using namespace std;

unsigned long long mypow(unsigned long long b,unsigned long long p)
{
    unsigned long long ans=1;
    for(int i=1;i<=p;i++)
    {
        ans*=b;
    }
   return ans;
}

int main()
{
    unsigned long long b,k,n;
    while(cin>>b>>k>>n)
    {
        unsigned long long a=mypow(b,k);
        cout<<a<<endl;
        a=a%n;
        unsigned long long c=(b%n);
        c=mypow(c,k);
        c=c%n;
        cout<<a<<" "<<c<<endl;
    }
}
