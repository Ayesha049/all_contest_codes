#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(int i=(a);i<(b);i++)
#define fd(i,a,b)      for(ll i=(a);i>(b);i--)
#define x              first
#define y              second
#define si(a)          scanf("%d",&a)
#define sii(a,b)       scanf("%d %d",&a,&b)
#define siii(a,b,c)    scanf("%d %d %d",&a,&b,&c)
#define sl(a)          scanf("%I64d",&a)
#define sll(a,b)       scanf("%I64d %I64d",&a,&b)
#define slll(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c);
#define pfci(n,ans)    printf("Case %I64d: %d\n",n,ans)
#define pfcl(n,ans)    printf("Case %I64d: %I64d\n",n,ans)
#define pfcd(n,ans)    printf("Case %I64d: %lf\n",n,ans)
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define MOD 1000000009
#define ld long double
#define mp make_pair
using namespace std;
#define INF 1e12
#define EPS 1e-15
//#define double long double
#define PI acos(-1.0)



int pr[2000001];
vector<int>primes;

void seive()
{
    pr[1]=1;
    for(int i=2; i<=150; i++)
    {
        if(pr[i]) continue;

        for(int j=2*i; j<150; j+=i) pr[j]=1;
    }
}


void solve()
{
    int n;
    cin>>n;
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

    int cc=0;
    for(int i=0; i<primes.size(); i++)
    {
        if(cnt[primes[i]]==0)
        {
            break;
        }
        else cc++;

    }
    cout<<n<<" = ";
    for(int i=0;i<cc-1;i++)
    {
        printf("%d (%d) * ",primes[i],cnt[primes[i]]);
    }
    printf("%d (%d)\n",primes[cc-1],cnt[primes[cc-1]]);

}

int main()
{
    int n;
    seive();

    for(int i=2; i<=150; i++)
    {
        if(pr[i]==0)
        {
            primes.push_back(i);
        }
    }
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; ++i)
    {
        printf("Case %d: ", i + 1);
        solve();
    }
    return 0;
}



