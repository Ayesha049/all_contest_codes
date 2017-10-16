#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;
    int a;
    cin>>a;
    while(1)
    {
        if(a%2!=0 && a%3!=0) break;
        if(a%2==0) a/=2;
        if(a%3==0) a/=3;
    }
    int xx=a;
    for(int i=1; i<n; i++)
    {
        cin>>a;
        while(1)
        {
            if(a%2!=0 && a%3!=0) break;
            if(a%2==0) a/=2;
            if(a%3==0) a/=3;
        }
        if(a!=xx) flag=1;
    }
    if(flag==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

