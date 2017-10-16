#include<bits/stdc++.h>
using namespace std;

int pr[2000001];

void seive()
{
    pr[1]=1;
    for(int i=2; i<=2000000; i++)
    {
        if(pr[i]) continue;

        for(int j=2*i; j<2000000; j+=i) pr[j]=1;
    }
}

int main()
{
    seive();
    int n;
    vector<int>p;
    for(int i=1;i<2000000;i++)
    {
        if(pr[i]==0) p.push_back(i);
    }
    while(cin>>n)
    {
        if(n==0) break;
        int cnt=0;
        for(int i=0; p[i]<=n/2; i++)
        {
            if(pr[n-p[i]]==0) cnt++;
        }
        cout<<cnt<<endl;
    }
}


