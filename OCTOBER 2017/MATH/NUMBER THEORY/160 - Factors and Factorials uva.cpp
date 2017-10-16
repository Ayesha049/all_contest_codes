#include<bits/stdc++.h>
using namespace std;

int pr[2000001];

void seive()
{
    pr[1]=1;
    for(int i=2; i<=150; i++)
    {
        if(pr[i]) continue;

        for(int j=2*i; j<150; j+=i) pr[j]=1;
    }
}
int main()
{
    int n;
    seive();
    vector<int>primes;
    for(int i=2; i<=150; i++)
    {
        if(pr[i]==0)
        {
            primes.push_back(i);
        }
    }
    while(cin>>n)
    {
        if(n==0) break;
        map<int,int>cnt;
        for(int i=2; i<=n; i++)
        {
            if(pr[i]==0)
            {
                cnt[i]++;
            }
            else
            {
                for(int j=0; j<primes.size(); j++)
                {
                    if(primes[j]>i) break;
                    int xx=i;
                    if(pr[xx]==0 || xx==0) break;
                    if(xx%primes[j]==0)
                    {
                        while(xx%primes[j]==0)
                        {
                            if(xx==0) break;
                            xx/=primes[j];
                            cnt[primes[j]]++;
                        }
                    }
                }
            }

        }
        printf("%3d! =",n);
        int cc=0;
        for(int i=0; i<15; i++)
        {
            cc++;
            if(cnt[primes[i]]!=0)
            {
                printf("%3d",cnt[primes[i]]);
            }
            else break;

        }
        int flag=0;
        for(int i=15; i<primes.size(); i++)
        {
            if(flag==0)
            {
                if(cnt[primes[i]]!=0)
                {
                    cout<<endl<<"      ";
                    printf("%3d",cnt[primes[i]]);
                    flag=1;
                }
            }
            else
            {
                if(cnt[primes[i]]!=0)
                {
                    printf("%3d",cnt[primes[i]]);
                }
            }

        }
        cout<<endl;

    }
}


