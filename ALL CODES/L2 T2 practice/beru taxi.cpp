#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    double mn=INFINITY;
    for(int i=0;i<n;i++)
    {
        double c,d,e;
        cin>>c>>d>>e;
        double xx=(a-c)*(a-c);
        double yy=(b-d)*(b-d);
        xx=xx+yy;
        xx=sqrt(xx);
        xx=xx/e;
        if(xx<mn)
            mn=xx;
    }
    printf("%.20lf\n",mn);
}
