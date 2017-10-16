#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(m%i==0)
        {
            int a=m/i;
            if(a<=n)
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
