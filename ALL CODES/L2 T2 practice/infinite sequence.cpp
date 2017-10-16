#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long a,num,d;
    cin>>a>>num>>d;

    if(num<a && d>=0)
        cout<<"NO"<<endl;
    else if(num>a && d<=0)
        cout<<"NO"<<endl;
    else if(num==a)
        cout<<"YES"<<endl;
    else if(d==0)
        cout<<"NO"<<endl;
    else
    {
        long long n=(num-a)/d;
        long long a1=a+(n-1)*d;
        long long a2=a+(n)*d;
        if(num==a1 || num==a2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
