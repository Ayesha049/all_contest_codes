#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>c>>b;
    int aa=a+b+c;
    int bb=2*a+2*c;
    bb=min(aa,bb);
    int cc= 2*(a+b);
    int dd=2*(b+c);
    cc=min(cc,dd);
    cc=min(bb,cc);
    cout<<cc<<endl;
}

