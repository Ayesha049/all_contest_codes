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

int cnt(int n)
{
    int c=0;
    for(int i=2;i<=n;i++)
    {
        if(isprime(i)==1)
        {

            if((n%i)==0)
                c++;
            if(c>2)
                break;

        }
    }
    if(c==2)
        return 1;
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int cc=0;
    for(int i=2;i<=n;i++)
    {
        int a=cnt(i);
        cc+=a;
    }
    cout<<cc<<endl;
}
