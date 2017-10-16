#include<bits/stdc++.h>
using namespace std;

int pr[2000001];
vector<int>prime;

void seive()
{
    pr[1]=1;
    for(int i=2;i<=2000000;i++)
    {
        if(pr[i]) continue;

		for(int j=2*i;j<2000000;j+=i) pr[j]=1;
    }
    for(int i=1;i<2000000;i++)
    {
        if(pr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    seive();

}

