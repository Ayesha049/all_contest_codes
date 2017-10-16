#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dd=1;
    int st=n-1;
    while(dd<=n)
    {
        int xx=st/2;
        for(int i=0;i<xx;i++) cout<<"*";
        for(int i=0;i<dd;i++) cout<<"D";
        for(int i=0;i<xx;i++) cout<<"*";
        cout<<endl;
        dd+=2;
        st-=2;
    }
    dd=n-2;
    st=2;
    while(dd>=1)
    {
        int xx=st/2;
        for(int i=0;i<xx;i++) cout<<"*";
        for(int i=0;i<dd;i++) cout<<"D";
        for(int i=0;i<xx;i++) cout<<"*";
        cout<<endl;
        dd-=2;
        st+=2;
    }
}

