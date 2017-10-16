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
        double ans=1;
        int flag=0;
        for(int i=1;;i++)
        {

            ans=i;
            for(int j=1;j<n;j++)
            {
                ans*=i;
            }
            if(ans==b/a)
            {
                flag=1;
                if(tb*ta<0)
                    i*=-1;
                cout<<i<<endl;
                break;
            }

            //cout<<ans<<endl<<b/a<<endl;
            if(ans>b/a)
                break;
        }
        if(flag==0)
            cout<<"No solution"<<endl;
    }
}

