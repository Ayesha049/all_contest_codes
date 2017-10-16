#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n/7;
    int mn= a*2;
    int mx=mn;
    a=n%7;
    if(a==6) mn++;
    if(a>2) mx+=2;
    else mx+=a;
    cout<<mn<<" "<<mx<<endl;
}

