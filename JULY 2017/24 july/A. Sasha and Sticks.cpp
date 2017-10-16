#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,k;
    cin>>n>>k;
    n=(n%(2*k));
    n=n/k;
    if(n==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

