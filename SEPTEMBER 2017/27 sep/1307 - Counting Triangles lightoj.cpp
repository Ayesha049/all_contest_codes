
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
    int n;
    si(n);
    vector<ll>vc;
    ll a;
    f(i,0,n)
    {
        scanf("%lld",&a);
        vc.pb(a);
    }
    sort(vc.begin(),vc.end());
    int cnt=0;
    for(int i=n-1;i>=2;i--)
    {
        for(int j=i-1;j>=1;j--)
        {
            ll xx= vc[i]-vc[j]+1;
            std::vector<ll>::iterator low;
            low=std::lower_bound (vc.begin(), vc.end(),xx);
            int it2=(low - vc.begin());
            if((j-it2)>0)
                cnt+=(j-it2);
            //cout<<xx<<" "<<it2<<endl;

        }
    }
    cout<<cnt<<endl;
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



