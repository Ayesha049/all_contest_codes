#include<bits/stdc++.h>
using namespace std;

int pr[20000001];

void seive()
{
    pr[1]=1;
    for(int i=2;i<=20000000;i++)
    {
        if(pr[i]) continue;

		for(int j=2*i;j<20000000;j+=i) pr[j]=1;
    }
}

int main()
{
    seive();
    vector<pair<int, int> >prime;
    for(int i=1;i<20000000;i++)
    {
        if(pr[i]==0 && pr[i+2]==0)
        {
            prime.push_back(make_pair(i,i+2));
        }
    }
    int n;
    while(cin>>n)
    {
        printf("(%d, %d)\n",prime[n-1].first,prime[n-1].second);
    }
}


