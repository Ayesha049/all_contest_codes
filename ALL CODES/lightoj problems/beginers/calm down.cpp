#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926535897932384


int main()
{
    int test;
    int xx;
    cin>>test;
    xx=0;
    while(test--)
    {
        xx++;
        double a,b;
        cin>>a>>b;
        double x=(a*sin(pi/b))/(sin(pi/b)+1);
        cout<<"Case "<<xx<<": ";
        printf("%.10lf\n",x);
    }
}


