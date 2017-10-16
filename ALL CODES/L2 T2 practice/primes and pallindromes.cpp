#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    if(n==2)
        return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int cntprime(int n)
{
    if(n==2)
        return 1;
    int cnt=1;
    for(int i=3;i<=n;i++)
    {
        if(isprime(i)==1)
            {
                //cout<<i<<endl;
                cnt++;
            }
    }
    return cnt;

}

int cntpalin(int n)
{

}

int main()
{
    int p,q;
    cin>>p>>q;
    //cout<<cntprime(40);

}
