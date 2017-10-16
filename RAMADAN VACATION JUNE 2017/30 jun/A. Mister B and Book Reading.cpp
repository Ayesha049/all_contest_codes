#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,v0,v1,a,l;
    cin>>c>>v0>>v1>>a>>l;
    int cnt=0;
    if(v0>c) cout<<"1"<<endl;
    else
    {
        cnt++;
        c-=v0;
        while(1)
        {
            if(c<=0) break;
            v0+=a;
            cnt++;
            if(v0>v1) v0=v1;
            c-=(v0-l);
        }
        cout<<cnt<<endl;
    }
}

