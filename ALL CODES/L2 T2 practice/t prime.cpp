#include<bits/stdc++.h>
using namespace std;

int arr[1000001];

int isprime(long long a)
{
    if(arr[a]==2)
        return 1;
    return 0;
}


int main()
{
    for(int i=2;i<=1000000;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=2;
            for(int j=2;;j++)
            {
                if(i*j>1000000)
                    break;
                else
                    arr[i*j]=1;

            }
        }
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        double b=sqrt(a);
        a=b;
        if((double)a==b)
        {
            if(isprime(a)==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
