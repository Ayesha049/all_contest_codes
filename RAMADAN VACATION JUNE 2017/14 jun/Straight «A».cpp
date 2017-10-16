#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,k;
    cin>>n>>k;
    double ans=0;
    for(int i=0; i<n; i++)
    {
        double a;
        cin>>a;
        ans+=a;
    }
    int cnt=0;
    while(1)
    {
        double aa=ans/n;
        if(k-aa<=.5)
            break;
        cnt++;
        ans+=k;
        n++;
    }
    cout<<cnt<<endl;

}
