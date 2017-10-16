#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(ll i=(a);i<(b);i++)
#define fd(i,a,b)      for(ll i=(a);i>(b);i--)
#define x              first
#define y              second
#define si(a)          scanf("%d",&a)
#define sii(a,b)       scanf("%d %d",&a,&b)
#define siii(a,b,c)    scanf("%d %d %d",&a,&b,&c)
#define sl(a)          scanf("%I64d",&a)
#define sll(a,b)       scanf("%I64d %I64d",&a,&b)
#define slll(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c);
#define pfci(n,ans)    prllf("Case %I64d: %d\n",n,ans)
#define pfcl(n,ans)    prllf("Case %I64d: %I64d\n",n,ans)
#define pfcd(n,ans)    prllf("Case %I64d: %lf\n",n,ans)
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

int main()
{
    ll n,k;
    cin>>n>>k;
    if(k>n) cout<<n<<endl;
    else if(n==k) cout<<n-1<<endl;
    else
    {
        ll low=0;
        ll high=n;
        while(high>low)
        {
            ll mid= (high+low)/2;
            ll xx=0;
            ll kk=1;
            while(1)
            {
                if(mid/kk==0) break;
                xx+=mid/kk;
                kk*=k;
            }
            if(xx==n)
            {
                cout<<mid<<endl;
                return 0;
            }
            else if(xx>n) high=mid;
            else low=mid+1;
        }
        cout<<low<<endl;
    }
}
