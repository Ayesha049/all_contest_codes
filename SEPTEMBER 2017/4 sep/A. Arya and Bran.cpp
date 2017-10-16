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
    int n,k;
    cin>>n>>k;
    if(k>(8*n))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int rem=0;
    int cnt=0;
    f(i,0,n)
    {
        int a;
        si(a);
        if(a>8)
        {
            rem+=a-8;
            a=8;
        }
        else
        {
            int need= 8-a;
            if(rem>=need)
            {
                rem-=need;
                a=8;
            }
            else
            {
                a+=rem;
                rem=0;
            }
        }
        if(k>a)
        {
            k-=a;
            cnt++;
        }
        else
        {
            cnt++;
            k=0;
            break;
        }
    }
    if(k>0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<cnt<<endl;
}



