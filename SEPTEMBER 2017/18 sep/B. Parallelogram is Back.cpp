#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(int i=(a);i<(b);i++)
#define fd(i,a,b)      for(ll i=(a);i>(b);i--)
//#define x              first
//#define y              second
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

int main()
{
    int ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    vector<pair<int,int> > points;
    points.pb(mp(ax+bx-cx,ay+by-cy));
    points.pb(mp(ax-bx+cx,ay-by+cy));
    points.pb(mp(bx-ax+cx,by+cy-ay));

    map<pair<int,int>,int>mpp;
    mpp[mp(ax+bx-cx,ay+by-cy)]++;
    mpp[mp(ax-bx+cx,ay-by+cy)]++;
    mpp[mp(bx-ax+cx,by+cy-ay)]++;

    f(i,0,points.size())
    {
        if(mpp[points[i]]!=1)
        {
            cout<<"0"<<endl;
        }
    }
    cout<<points.size()<<endl;
    f(i,0,points.size())
    {
        cout<<points[i].x<<" "<<points[i].y<<endl;

    }


}


