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
#define double long double
#define EPS 1e-7

int u[100001], v[100001], c[100001], mark[100001];
int main()
{
    int n;
    cin>>n;
    f(i,1,n)
    {
        sii(u[i],v[i]);
    }
    int cnt=0;
    f(i,1,n+1)
    {
        si(c[i]);
    }
    f(i,1,n)
    {
        if(c[u[i]]!=c[v[i]])
        {
            cnt++;
            mark[u[i]]++;
            mark[v[i]]++;
        }
    }
    //cout<<cnt<<" "<<mark[2]<<endl;
    f(i,1,n+1)
    {
        if(cnt==mark[i])
        {
            cout<<"YES"<<endl;
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}


