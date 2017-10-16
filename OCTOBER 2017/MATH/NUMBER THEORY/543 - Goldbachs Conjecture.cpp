#include<bits/stdc++.h>
using namespace std;

int pr[2000001];
vector<int>prime;

void seive()
{
    pr[0]=1;
    pr[1]=1;
    for(int i=2;i<=2000000;i++)
    {
        if(pr[i]) continue;

		for(int j=2*i;j<2000000;j+=i) pr[j]=1;
    }
    pr[2]=1;
}

int main()
{
    seive();
    for(int i=1;i<=2000000;i++)
    {
        if(pr[i]==0)
        {
            prime.push_back(i);
        }
    }
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int flag=0;
        for(int i=0;prime[i]<n;i++)
        {
            if(pr[n-prime[i]]==0)
            {
                flag=1;
                printf("%d = %d + %d\n",n,prime[i],n-prime[i]);
                break;
            }
        }
        if(flag==0) cout<<"Goldbach's conjecture is wrong.\n";
    }
}

