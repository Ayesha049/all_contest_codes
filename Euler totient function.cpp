#include<bits/stdc++.h>
using namespace std;

long long phii[5000001];

void seivephi()
{
    for(int i=1; i<=5000000; i++) phii[i]=i;
    phii[1]=1;

    for (int p=2; p<=5000000; p++)
    {

        if (phii[p] == p)
        {

            phii[p] = p-1;


            for (int i = 2*p; i<=5000000; i += p)
            {
               phii[i] = (phii[i]/p) * (p-1);
            }
        }
    }
}



long long phi(long long n)
{
    long long ret=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            ret-=ret/i;
        }

    }
    if(n>1) ret-=ret/n;
    return ret;
}

int main()
{
    long long n;
    seivephi();
    for(int i=2;i<=20;i++) cout<<phii[i]<<" ";
    while(cin>>n)
    {
        if(n==0) break;
        if(n==1) cout<<"0"<<endl;
        else cout<<phi(n)<<endl;
    }
}
