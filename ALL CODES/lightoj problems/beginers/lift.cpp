#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test;
    int xx;
    cin>>test;
    xx=0;
    while(test--)
    {
        xx++;
        int a,b;
        cin>>a>>b;
        int x=a+abs(a-b);
        x=x*4;
        x=x+19;
        cout<<"Case "<<xx<<": "<<x<<endl;
    }
}

