#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a=(n*(n+1))/2;
    m=(m%a);
    for(int i=1;i<=n;i++)
    {
        if(m<i) break;
        m-=i;
    }
    cout<<m<<endl;
}

