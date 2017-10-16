#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,k;
    cin>>n>>k;
    long long cnt=0,c=0;
    for(int i=0;i<n;i++)
    {
        double a;
        cin>>a;
        c+=ceil(a/k);
    }
    cnt+=(c/2);
    if(c%2!=0) cnt++;
    cout<<cnt<<endl;
}

