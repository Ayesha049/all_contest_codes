#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v1,v2,t,d;
    cin>>v1>>v2>>t>>d;
    int cnt=v1+v2;
    int x=v1;
    for(int i=2;i<t;i++)
    {
        int aa=x+d;
        int xx=((t-i)*d)+v2;
        if(aa>xx) aa=xx;
        x=aa;
        cnt+=aa;
    }
    cout<<cnt<<endl;
}

