#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,f;
    cin>>n>>f;
    long long a[n];
    long long b[n];
    long long total;
    long long c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        total+=min(a[i],b[i]);
        long long x=2*a[i];
        c[i]=(min(x,b[i])-min(a[i],b[i]));
    }
    sort(c,c+n);
    reverse(c,c+n);
    for(int i=0;i<f;i++)
        total+=c[i];
    cout<<total<<endl;

}
