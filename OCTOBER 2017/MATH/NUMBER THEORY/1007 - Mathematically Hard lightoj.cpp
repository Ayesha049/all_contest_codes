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


unsigned long long phii[5000005];
int mark[5000005];

void seivephi()
{
    for(int i=1; i<=5000000; i++) phii[i]=i;
    phii[1]=1;
    mark[1]=1;

    for (int p=2; p<=5000000; p++)
    {

        if (!mark[p])
        {
            for (int i = p; i<=5000000; i += p)
            {
                mark[i]=1;
                phii[i] = (phii[i]/p) * (p-1);
            }
        }
    }
}


void solve()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%llu\n",phii[b]-phii[a-1]);
}

int main()
{
    int tc;
    seivephi();
    for(int i=2; i<=5000000; i++)
    {
        phii[i]=phii[i]*phii[i];
        phii[i]=phii[i-1]+phii[i];
    }
    cin >> tc;

    for (int i = 0; i < tc; ++i)
    {
        printf("Case %d: ", i + 1);

        solve();
    }
    return 0;
}



