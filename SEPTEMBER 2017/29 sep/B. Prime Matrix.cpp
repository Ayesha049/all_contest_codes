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

int pr[2000001];

void seive()
{
    pr[1]=1;
    for(int i=2;i<=2000000;i++)
    {
        if(pr[i]) continue;

		for(int j=2*i;j<2000000;j+=i) pr[j]=1;
    }
}

int arr[501][501];

int main()
{
    seive();
    vector<int>prime;
    for(int i=1;i<2000000;i++)
    {
        if(pr[i]==0) prime.pb(i);
    }
    int n,m;
    cin>>n>>m;
    int a;
    std::vector<int>::iterator low;
    f(i,0,n)
    {
        f(j,0,m)
        {
            si(a);
            low=std::lower_bound (prime.begin(), prime.end(),a);
            int pos=(low- prime.begin());
            arr[i][j]=prime[pos]-a;
        }
    }
    int mn=(int)INFINITY;
    f(i,0,n)
    {
        int cnt=0;
        f(j,0,m)
        {
            cnt+=arr[i][j];
        }
        mn=min(mn,cnt);
    }
    f(i,0,m)
    {
        int cnt=0;
        f(j,0,n)
        {
            cnt+=arr[j][i];
        }
        mn=min(mn,cnt);
    }
    cout<<mn<<endl;
}


