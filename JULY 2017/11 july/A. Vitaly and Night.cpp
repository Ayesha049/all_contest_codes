#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=1;i<=(n*m);i++)
    {
        int a,b;
        cin>>a>>b;
        if(a+b>0) cnt++;
    }
    cout<<cnt<<endl;
}

