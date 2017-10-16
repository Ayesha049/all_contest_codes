#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    if(n==2)
        return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int ta,tb,n;
    cin>>ta>>tb>>n;
    int a=abs(ta);
    int b=abs(tb);

    if((a==0 && b!=0) )
        cout<<"No solution"<<endl;
    else if(n==0)
    {
        cout<<"1"<<endl;
    }
    else if(b==0)
        cout<<"0"<<endl;

    else if(b%a!=0 )
        cout<<"No solution"<<endl;
    else if(n==1)
        cout<<tb/ta<<endl;
    else
    {
        int base;
        int t=b/a;
        int cnt1=0,cnt2=0;
        int mxcnt=0;
        for(int i=2;i<=t;i++)
        {
            {
                if(t%i==0)
                {
                    base=i;
                    cnt1++;
                    while(t%i==0)
                    {
                        t=t/i;
                        cnt2++;
                    }
                }
            }
            if(cnt1>1)
                break;
        }
        if(cnt1>1 || cnt2%n!=0)
            cout<<"No solution"<<endl;
        else
        {
            int tt=cnt2/n;
            double ans= pow(base*1.0,tt*1.0);
            if(ta*tb<0)
                ans=ans*-1;
            cout<<ans<<endl;
        }
    }
}
