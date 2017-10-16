#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int aa=0,bb=0,cc=0;
    for(int i=1;i<=6;i++)
    {
        int d1=abs(a-i);
        int d2=abs(b-i);
        if(d1<d2) aa++;
        else if(d1>d2) bb++;
        else cc++;
    }
    cout<<aa<<" "<<cc<<" "<<bb<<endl;
}
