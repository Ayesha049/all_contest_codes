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
    int a,b,f,k;
    cin>>a>>b>>f>>k;
    int ini=b;
    if(b<f || b< (a-f))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int cnt=0;
    int e = (a-f);
    f(i,0,k)
    {
        if(i%2==0)
        {
            if(ini<f)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            ini-=f;
            if(i==(k-1))
            {
                if(ini<e)
                {
                    cnt++;
                    ini=b;
                }

            }
            else if(ini<2*e)
            {
                cnt++;
                ini=b;

            }
            ini-=e;
        }
        else
        {
            if(ini<e)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            ini-=e;
            if(i==(k-1))
            {
                if(ini<f)
                {
                    cnt++;
                    ini=b;
                }
            }
            else if(ini<2*f)
            {
                cnt++;
                ini=b;

            }
            ini-=f;
        }

    }
    cout<<cnt<<endl;
}


