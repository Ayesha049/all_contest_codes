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
#define EPS 1e-7

char arr[51][51];
int main()
{
    int n,m;
    cin>>n>>m;
    ll cnt=0;
    ll k1=0,k0=0;
    f(i,1,n+1)
    {
        k1=0,k0=0;
        f(j,1,m+1)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='1') k1++;
        }
        k0=m-k1;
        ll x=1;
        f(j,1,k1+1) x*=2;
        x--;
        cnt+=x;
        x=1;
        f(j,1,k0+1) x*=2;
        x--;
        cnt+=x;
    }
    k1=0,k0=0;
    f(i,1,m+1)
    {
        k1=0,k0=0;
        f(j,1,n+1)
        {
            if(arr[j][i]=='1') k1++;
        }
        k0=n-k1;
        ll x=1;
        f(j,1,k1+1) x*=2;
        x--;
        cnt+=x;
        x=1;
        f(j,1,k0+1) x*=2;
        x--;
        cnt+=x;
    }
    ll xxx=m*n;
    cnt-=xxx;
    cout<<cnt<<endl;

}


