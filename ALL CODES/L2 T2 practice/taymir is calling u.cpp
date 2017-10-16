#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int a=gcd(n,m);
    int x=(n*m)/a;
    int b=z/x;
    cout<<b<<endl;
}
