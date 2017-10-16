#include<bits/stdc++.h>
using namespace std;

int arr[1001];
int primes[200];

int main()
{
    int cnt=1;
    arr[2]=1;
    int ii=1;
    primes[ii++]=2;
    for(int i=3; i<=1000; i++)
    {
        int flag=0;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            arr[i]=1;
            cnt++;
            primes[ii++]=i;
        }
    }
    //cout<<cnt;
    int n,k;
    cin>>n>>k;
    if(k>cnt || k>n)
        cout<<"NO"<<endl;

    else
    {
        cnt=0;
        for(int i=1;; i++)
        {
            if(primes[i]+primes[i+1]-1>n)
                break;
            else if(arr[primes[i]+primes[i+1]+1]==1)
            {
                cnt++;
               // cout<<primes[i]<<" "<<primes[i+1]<<" "<<primes[i]+primes[i+1]+1<<endl;
            }
        }
        if(cnt>=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
