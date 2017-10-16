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
#define EPS 1e-12
//#define double long double
#define PI 3.141592653589

vector<unsigned ll>fib;




int bigmod(unsigned ll a,unsigned ll p,int m)
{
    int r = 1;
    while(p!=0)
    {
        if(p%2==1) r = (r*a)%m;
        a = (a*a)%m;
        p = p/2;
    }
    return r;
}

int solve(unsigned ll a, unsigned ll b, int n)
{


    vector<int>pattern;
    pattern.pb(0);
    pattern.pb(1);
    if(n==1) return 0;
    int pos=0;
    for(int i=2;;i++)
    {
        //unsigned ll xx=fib[i];
        int xx=pattern[i-1]+pattern[i-2];
        xx= xx%n;
        if(xx==1)
        {
            if(pattern[i-1]==0)
            {
                pos=i-1;
                pattern.pb(xx);
                break;
            }
        }
        //cout<<xx<<" ";
        pattern.pb(xx);
    }

    int pos1=bigmod(a%pos,b,pos);
    //cout<<pos1<<endl;
    return pattern[pos1];



}



int main()
{
    /*fib.pb(0);
    fib.pb(1);
    f(i,2,200)
    {
        unsigned ll xx=fib[i-1]+fib[i-2];
        fib.pb(xx);

    }*/
    int t;
    cin>>t;
    unsigned ll x,y,n;
    while(t--)
    {
        scanf("%llu %llu %llu",&x,&y,&n);
        int ans=solve(x,y,n);
        cout<<ans<<endl;
    }
    return 0;
}



