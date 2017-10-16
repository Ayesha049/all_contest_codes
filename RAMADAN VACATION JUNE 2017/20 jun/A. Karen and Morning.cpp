#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    char ch;
    cin>>h>>ch>>m;
    int cnt=0;
    while(1)
    {
        int h1,h2,m1,m2;
        h1=h%10;
        h2=h/10;
        m1=m%10;
        m2=m/10;
        if(h1==m2 && h2==m1) break;
        else m++;
        if(m>=60)
        {
            m=0;
            h++;
        }
        if(h>=24)
        {
            h=0;
        }
        cnt++;

    }
    cout<<cnt<<endl;
}

