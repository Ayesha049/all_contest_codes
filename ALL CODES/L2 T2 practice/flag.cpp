#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,flag1=0;
    char x,y,up;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>x;
            if(j>1)
            {
                if(x!=y) flag1=1;
            }
            y=x;
        }
        if(i>1)
        {
            if(up==x) flag1=1;
        }
        up=x;
    }
    if(flag1==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
