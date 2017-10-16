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
#define MAXN 100+10

int n;
double x[MAXN],y[MAXN],dp[MAXN][MAXN];
double ans;

double dis(int a,int b)
{
    return sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
}

void init()
{
    memset(dp,0,sizeof(dp));
    dp[2][1]=dis(1,2);
    for(int i=1; i<=n; i++)
    {
        scanf("%lf%lf", &x[i], &y[i]);
    }
}

int main(int argc, char const *argv[])
{
    while(~scanf("%d", &n))
    {
        init();
        for(int i=3; i<=n; i++)
        {
            dp[i][i-1]=INFINITY;
            for(int j=1; j<i-1; j++)
            {
                dp[i][i-1]=min(dp[i][i-1],dp[i-1][j]+dis(i,j));
                dp[i][j]=dp[i-1][j]+dis(i,i-1);
            }
        }
        ans=INFINITY;
        for(int i=1; i<n; i++)
        {
            ans=min(ans,dp[n][i]+dis(n,i));
        }
        printf("\n\n%.2lf\n",ans);
    }
    return 0;
}
