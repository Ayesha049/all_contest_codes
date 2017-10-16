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
    int n,m;
    cin>>n>>m;
    vector<ll>house;
    vector<ll>tower;
    ll a;
    map<ll,ll>mpp;
    f(i,0,n)
    {
        sl(a);
        if(mpp[a]==0)
        {
            house.pb(a);
            mpp[a]=1;
        }
    }
    mpp.clear();
    f(i,0,m)
    {
        sl(a);
        if(mpp[a]==0)
        {
            tower.pb(a);
            mpp[a]=1;
        }
    }
    mpp.clear();
    tower.pb((ll)INFINITY );
    std::vector<ll>::iterator low;
    f(i,0,house.size())
    {
        low=std::lower_bound (tower.begin(), tower.end(),house[i]);
        int pos1=(low- tower.begin());
        int pos2= pos1-1;
        ll dif1= abs(tower[pos1]-house[i]);
        ll dif2= (int)INFINITY;
        if(pos2>=0)
        {
            dif2= abs(tower[pos2]-house[i]);
        }
        if(dif1<dif2)
        {
            mpp[pos1] = max(mpp[pos1], dif1);
        }
        else if(dif1>=dif2)
        {
            mpp[pos2] = max(mpp[pos2], dif2);
        }
    }
    ll r=0;
    f(i,0,tower.size()-1)
    {
        r= max(r,mpp[i]);
    }
    cout<<r<<endl;
}


