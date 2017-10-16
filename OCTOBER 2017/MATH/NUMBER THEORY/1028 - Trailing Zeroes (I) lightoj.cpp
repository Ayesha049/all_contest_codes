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


int pr[1000009];
vector<ll>prime;

void seive()
{
    pr[1]=1;
    for(int i=2; i<=1000000; i++)
    {
        if(pr[i]) continue;

        for(int j=2*i; j<=1000000; j+=i) pr[j]=1;
    }
    for(int i=1; i<=1000000; i++)
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
    int tc;
    cin >> tc;
    ll n;
    for (int i = 0; i < tc; ++i)
    {
        printf("Case %d: ", i + 1);
        scanf("%lld",&n);
        ll cnt=1;
        ll xx=n;
        for(int i=0; i<prime.size(); i++)
        {
            if(sqrt(xx)<prime[i]) break;
            if(xx%prime[i]==0)
            {
                ll cc=0;
                while(xx%prime[i]==0)
                {
                    xx/=prime[i];
                    cc++;
                }
                cnt*=(cc+1);
            }
        }
        if(xx>1) cnt*=2;
        printf("%lld\n",cnt-1);
    }
    return 0;
}



