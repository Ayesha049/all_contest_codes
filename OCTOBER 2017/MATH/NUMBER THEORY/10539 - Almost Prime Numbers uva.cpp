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
    vector<long long>prime;
    for(int i=1; i<1000001; i++)
    {
        if(pr[i]==0)
        {
            prime.push_back((long long)i);
        }
    }
    vector<long long>ans;
    for(int i=0; i<prime.size(); i++)
    {
        long long base=prime[i];
        //cout<<base<<endl;
        for(int j=2;; j++)
        {
            if(base*prime[i]>1000000000000) break;
            base=base*prime[i];
            ans.push_back(base);
            //cout<<base<<" ";
        }
    }
    sort(ans.begin(),ans.end());
    std::vector<long long>::iterator low,up;
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long cnt=0;
        int i=0;
        low=std::lower_bound (ans.begin(), ans.end(),a); //          ^
        up= std::upper_bound (ans.begin(), ans.end(),b);
        int it1=(low- ans.begin());
        int it2=(up - ans.begin());
        cnt=it2-it1;
        cout<<cnt<<endl;
    }
}


