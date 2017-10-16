#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int f=0;
    for(int i=1;i<=100000;i++)
    {
        if(b==d)
        {
            f=1;
            break;
        }
        else
        {
            if(b>d)
            {
                d+=c;
            }
            else
            {
                b+=a;
            }
        }
    }
    if(f==0) cout<<"-1"<<endl;
    else cout<<b<<endl;
}

