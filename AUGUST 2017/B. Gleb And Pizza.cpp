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
//#define double long double
#define EPS 1e-7

int main()
{
    double d,r;
    cin>>d>>r;
    r=d-r;
    double dis;
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        double x,y,rr;
        //scanf("%lf,%lf,%lf", &x,&y,&rr);
        cin>>x>>y>>rr;
        dis=sqrt((x*x)+(y*y));
        double d1=dis-r;
        double d2=d-dis;
        if(d1>=0 && d2>=0)
        {
            if(d1>=rr && d2>=rr) cnt++;
        }
    }
    cout<<cnt<<endl;
}


