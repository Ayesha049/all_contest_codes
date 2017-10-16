#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(b<a)
        a=b;
    if(a%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
}
