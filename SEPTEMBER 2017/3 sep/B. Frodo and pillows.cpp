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

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int cnt=1;
    m-=n;
    int L=0,R=-1;
    while(1)
    {
        L++;
        R++;
        int flag=0;
        if(L>k)
        {
            L=k;
            flag++;
        }
        if(R>(n-k))
        {
            R=(n-k);
            flag++;
        }
        if(flag==2)
        {
            cnt+=m/n;
            break;
        }
        if(L+R<=m)
        {
            //cout<<L<<" "<<R<<endl;
            m-=L+R;
            cnt++;
        }
        else break;

    }
    cout<<cnt<<endl;
}


