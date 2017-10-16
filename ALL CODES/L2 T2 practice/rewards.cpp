#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a1,a2,a3,b1,b2,b3,n;
    double cup,medal;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    cup=a1+a2+a3;
    medal=b1+b2+b3;
    cup=ceil(cup/5);
    medal=ceil(medal/10);
    //cout<<cup<<" "<<medal<<endl;
    cup=cup+medal;
    if(cup<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
