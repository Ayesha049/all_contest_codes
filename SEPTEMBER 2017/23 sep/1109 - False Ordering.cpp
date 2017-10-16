
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

int order[1006];

void solve()
{
    vector<int>arr[1005];
    f(i,1,1005)
    {
        for(int j=i;i<=1000;j+=i)
        {
            if(j>1000) break;
            order[j]++;
        }
    }
    f(i,1,1005)
    {
        int x= order[i];
        arr[x].pb(i);
    }
    f(i,1,1005)
    {
        sort(arr[i].begin(),arr[i].end());
        reverse(arr[i].begin(),arr[i].end());
    }
    int jj=1;
    f(i,1,1005)
    {
        if(arr[i].size()!=0)
        {
            f(j,0,arr[i].size())
            {
                order[jj++]=arr[i][j];
            }
        }
    }

}

int main()
{
    int tc;
    cin >> tc;
    solve();
    for (int i = 0; i < tc; ++i)
    {
        int a;
        cin>>a;
        printf("Case %d: %d\n", i + 1,order[a]);

    }
    return 0;
}


