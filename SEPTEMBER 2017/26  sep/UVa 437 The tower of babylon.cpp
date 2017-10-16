
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


void solve(int n)
{
    vector<pair<int,int> >vc;
    map<pair<int,int> , int>mpp;
    int a,b,c;
    f(i,0,n)
    {
        cin>>a>>b>>c;
        if(mpp[mp(a,b)]==0)
        {
            mpp[mp(a,b)]=c;
            vc.pb(mp(a,b));
        }
        else if(mpp[mp(a,b)]<c) mpp[mp(a,b)]=c;
        if(mpp[mp(b,a)]==0)
        {
            mpp[mp(b,a)]=c;
            vc.pb(mp(b,a));
        }
        else if(mpp[mp(b,a)]<b) mpp[mp(b,a)]=c;
        if(mpp[mp(b,c)]==0)
        {
            mpp[mp(b,c)]=a;
            vc.pb(mp(b,c));
        }
        else if(mpp[mp(b,c)]<a) mpp[mp(b,c)]=a;
        if(mpp[mp(c,b)]==0)
        {
            mpp[mp(c,b)]=a;
            vc.pb(mp(c,b));
        }
        else if(mpp[mp(c,b)]<a) mpp[mp(c,b)]=a;
        if(mpp[mp(a,c)]==0)
        {
            mpp[mp(a,c)]=b;
            vc.pb(mp(a,c));
        }
        else if(mpp[mp(a,c)]<b) mpp[mp(a,c)]=b;
        if(mpp[mp(c,a)]==0)
        {
            mpp[mp(c,a)]=b;
            vc.pb(mp(c,a));
        }
        else if(mpp[mp(c,a)]<b) mpp[mp(c,a)]=b;
    }
    sort(vc.begin(),vc.end());
    n=vc.size();

    int *lis, i, j, max = 0;
    lis = (int*) malloc ( sizeof( int ) * n );


    for (i = 0; i < n; i++ )
        lis[i] = mpp[vc[i]];

    /* Compute optimized LIS values in bottom up manner */
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ )
            if ( ((vc[i].x > vc[j].x && vc[i].y > vc[j].y)) && lis[i] < lis[j] + mpp[vc[i]])
                lis[i] = lis[j] + mpp[vc[i]];

    /* Pick maximum of all LIS values */
    for (i = 0; i < n; i++ )
        if (max < lis[i])
            max = lis[i];

    /* Free memory to avoid memory leak */
    free(lis);
    cout<<max<<endl;
}

int main()
{
    int i=0;
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        printf("Case %d: maximum height = ", i + 1);
        i++;
        solve(n);
    }
    return 0;
}



