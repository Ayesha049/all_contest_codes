#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m1=a/10;
    m1*=3;
    int m2=(a/250)*c;
    m2=a-m2;
    m1=max(m1,m2);
    int v1=b/10;
    v1*=3;
    int v2=(b/250)*d;
    v2=b-v2;
    v1=max(v1,v2);
    if(m1>v1) cout<<"Misha"<<endl;
    else if(v1>m1) cout<<"Vasya"<<endl;
    else cout<<"Tie"<<endl;
}

