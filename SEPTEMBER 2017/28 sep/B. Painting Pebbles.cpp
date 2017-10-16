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

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>vc;
    int mn= (int)INFINITY;
    int mx=0;
    f(i,0,n)
    {
        int a;
        si(a);
        vc.pb(a);
        mn= min(mn,a);
        mx= max(mx,a);
    }
    vector<int>color;
    map<int,int>cnt;
    if(k>mn)
    {
        f(i,0,mn)
        {
            color.pb(i+1);
        }
        f(i,0,k)
        {
            color.pb(i+1);
        }

    }
    else
    {
        int xx= mn-k;
        f(i,0,k)
        {
            color.pb(i+1);
        }
        f(i,0,xx) color.pb(k);
        f(i,0,k)
        {
            color.pb(i+1);
        }

    }
    if(mx>color.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    f(i,0,n)
    {
        f(j,0,vc[i])
        {
            cout<<color[j]<<" ";
        }
        cout<<endl;
    }
}


