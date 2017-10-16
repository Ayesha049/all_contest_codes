#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,d;
    cin>>m>>d;
    int day=0;
    if(m==2)
    {
        day=28;
    }
    else if(m==4 || m==6 || m==9 || m==11)
        day=30;
    else
        day=31;
    int cnt=1;
    int a=day-(8-d);
    if(a%7==0)
    {
        cnt+=(a/7);
    }
    else
    {
        cnt=cnt+(a/7)+1;
    }
    cout<<cnt<<endl;
}
