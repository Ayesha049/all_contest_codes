#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=0,c=0;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            m++;
        if(b>a)
            c++;
    }
    if(m>c)
        cout<<"Mishka"<<endl;
    else if(c>m)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

}
