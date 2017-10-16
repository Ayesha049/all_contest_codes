#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m>n || n==1) cout<<n<<endl;
    else if((n-m)>(m-1)) cout<<m+1<<endl;
    else cout<<m-1<<endl;
}

