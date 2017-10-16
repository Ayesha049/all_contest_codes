
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


void solve()
{
    double l,n,c;
    cin>>l>>n>>c;
    double s = ((1+n*c)*l);
    l=l/2;
    double high=2*PI, low=0;
    while(high>low )
    {
        double angle = (high+low)/2;
        double r= s/angle;
        double d = r* sin(angle/2);
        if(fabs(d-l)<=EPS)
        {
            double ans= r - r*(cos(angle/2));
            printf("%.10lf\n",ans);
            return;
        }
        else if(l>d) high=angle;
        else low=angle;
    }
}

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; ++i)
    {
        printf("Case %d: ", i + 1);
        solve();
    }
    return 0;
}

