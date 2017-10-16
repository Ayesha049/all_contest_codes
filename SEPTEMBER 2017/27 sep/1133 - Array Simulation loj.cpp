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
    int n,m;
    cin>>n>>m;
    vector<int>vc;
    //vc.pb(0);
    int a;
    f(i,0,n)
    {
        si(a);
        vc.pb(a);
    }
    char c;
    f(i,0,m)
    {
        cin>>c;
        if(c=='S')
        {
            int xx;
            cin>>xx;
            f(j,0,n)
            {
                vc[j]+=xx;
            }
        }
        else if(c=='M')
        {
            int xx;
            cin>>xx;
            f(j,0,n)
            {
                vc[j]*=xx;
            }

        }
        else if(c=='D')
        {
            int xx;
            cin>>xx;
            f(j,0,n)
            {
                vc[j]/=xx;
            }
        }
        else if(c=='R')
        {
            reverse(vc.begin(),vc.end());
        }
        else if(c=='P')
        {
            int xx,yy;
            cin>>xx>>yy;
            int temp= vc[xx];
            vc[xx]=vc[yy];
            vc[yy]=temp;
        }
    }
    f(i,0,n-1)
    {
        cout<<vc[i]<<" ";
    }
    cout<<vc[n-1]<<endl;
}

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; ++i)
    {
        printf("Case %d:\n", i + 1);
        solve();
    }
    return 0;
}



