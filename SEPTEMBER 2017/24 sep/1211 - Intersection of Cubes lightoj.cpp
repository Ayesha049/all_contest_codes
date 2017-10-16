
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
    cin>>n;
    int mxx=0,mxy=0,mxz=0;
    int mnx=MOD,mny=MOD,mnz=MOD;
    while(n--)
    {
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        mxx=max(mxx,x1);
        mxy=max(mxy,y1);
        mxz=max(mxz,z1);

        mnx=min(mnx,x2);
        mny=min(mny,y2);
        mnz=min(mnz,z2);
    }
    int xx= mnx-mxx;
    int yy= mny-mxy;
    int zz= mnz-mxz;

    if(xx>0 && yy>0 && zz>0) cout<<xx*yy*zz<<endl;
    else cout<<"0"<<endl;
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




