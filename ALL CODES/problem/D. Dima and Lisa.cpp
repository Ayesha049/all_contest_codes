#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    if(n==2)
        return 1;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    int a,b,c;
    if(isprime(n)==1) cout<<"1"<<endl<<n<<endl;
    else
    {
        for(int i=n-2;; i--)
        {
            if(isprime(i)==1)
            {
                a=i;
                break;
            }
        }
        int x=n-a;
        for(int i=2;; i++)
        {
            if(isprime(i)==1 && isprime(x-i)==1)
            {
                b=i;
                c=x-i;
                break;
            }
        }
        if(c==0) cout<<"2"<<endl<<a<<" "<<b<<endl;
        else cout<<"3"<<endl<<a<<" "<<b<<" "<<c<<endl;
    }
}
