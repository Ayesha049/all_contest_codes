#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    if(n%2!=0)
    {
        if(k>(n/2+1))
        {
            k=k-(n/2);
            k--;
            k=2*k;
            cout<<k<<endl;
        }
        else
        {
            k=(2*k-1);
            cout<<k<<endl;
        }
    }
    else
    {
        if(k>(n/2))
        {
            k=k-(n/2);
            k=2*k;
            cout<<k<<endl;
        }
        else
        {
            k=(2*k-1);
            cout<<k<<endl;
        }
    }

}

