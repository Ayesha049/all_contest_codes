#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long xx=n-(m-1);
    long long mx=xx*(xx-1)/2;
    long long a=n/m;
    long long b=n%m;
    xx=(m-b)*(a*(a-1)/2);
    long long mn=b*(a*(a+1)/2);
    mn+=xx;
    cout<<mn<<" "<<mx<<endl;
}
