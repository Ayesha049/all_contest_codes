#include<iostream>
using namespace std;

int main()
{
    int mark[1001];
    int n,x;
    cin>>n>>x;
    for(int i=0;i<=1000;i++)
    {
        mark[i]=0;
    }
    int xx=n;
    while(xx--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            int t=a;
            a=b;
            b=t;
        }
        for(int i=a;i<=b;i++)
        {
            mark[i]=mark[i]+1;
        }
    }
    int mn=-1;
    int mx=2000;
    for(int i=0;i<=1000;i++)
    {
        if(mark[i]==n)
        {
            mn=i;
            break;
        }
    }
    if(mn==-1)
        cout<<mn<<endl;
    else
    {
        for(int i=1000;i>=0;i--)
        {
            if(mark[i]==n)
            {
                mx=i;
                break;
            }
        }
        if(x>=mn && x<=mx)
        {
            cout<<"0"<<endl;
        }
        if(x<mn)
        {
            mn=mn-x;
            cout<<mn<<endl;
        }
        else if(x>mx)
        {
            mx=x-mx;
            cout<<mx<<endl;
        }
    }
}
