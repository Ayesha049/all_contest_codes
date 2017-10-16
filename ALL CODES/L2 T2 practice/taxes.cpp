#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n==2)
        return true;
    else

    {
        for(int i=2; i*i<=n; n++)
        {
            if(n%i==0)
                return false;

        }
        return true;

    }

}
int main()
{
    long long n,x=-1;
    cin>>n;
    int cnt=0;
    while(1)
    {
        for(int i=n;; i--)
        {
            cout<<i<<" ";
            if(isprime(i))
            {
                x=i;
                cout<<i<<" ";
                break;
            }
        }
        n=n-x;
        if(n==0)
            break;
        if(n>1)
        {
            cnt++;
        }

    }
    cout<<cnt<<endl;

}
