#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(int i=(a);i<(b);i++)
#define fd(i,a,b)      for(ll i=(a);i>(b);i--)
#define x              first
#define y              second
#define si(a)          scanf("%d",&a)
#define sii(a,b)       scanf("%d %d",&a,&b)
#define siii(a,b,c)    scanf("%d %d %d",&a,&b,&c)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)       scanf("%lld %lld",&a,&b)
#define slll(a,b,c)    scanf("%lld %lld %lld",&a,&b,&c);
#define pfci(n,ans)    printf("Case %lld: %d\n",n,ans)
#define pfcl(n,ans)    printf("Case %lld: %lld\n",n,ans)
#define pfcd(n,ans)    printf("Case %lld: %lf\n",n,ans)
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define MOD 1000000009
#define ld long double
#define mp make_pair
using namespace std;
#define INF 1e12
#define double long double
#define EPS 1e-7

ll normalsum(ll n)
{
    return (n*(n+1))/2;
}

ll sqrsum(ll n)
{
    return (n*(n+1)*(2*n+1))/6;
}

int main()
{
    ll n,m;
    while(1)
    {
        sll(n,m);
        if(n+m==0) break;
        if(n>m) swap(n,m);
        ll ans= n*(m*(m-1)) + m*(n*(n-1)) + 2*( 2*(sqrsum(n-1) - normalsum(n-1)) + (m-n+1)*(n*(n-1)) );
        cout<<ans<<endl;
    }
}

