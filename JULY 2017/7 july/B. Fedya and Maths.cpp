#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int two[]= {1,2,4,3};
    int th[]= {1,3,4,2};
    int sum=1;
    int xx=s[s.length()-1];
    int yy=s[s.length()-2];
    xx-=48;
    yy-=48;
    int zz=xx%2;
    yy*=10;
    yy+=xx;
    if(s.length()<2) xx=xx%4;
    else xx=yy%4;
    sum+=(th[xx]);
    sum+=(two[xx]);
    if(zz==0) sum+=1;
    else sum+=4;
    sum=sum%5;
    cout<<sum<<endl;

}

