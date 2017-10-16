#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],b[1000],amax=0,bmax=0;

    cin>>n;

    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        amax|=a[i];
    }
    for(int i=0; i<n; ++i)
    {
        cin>>b[i];
        bmax|=b[i];
    }
    cout<<amax+bmax;



}
