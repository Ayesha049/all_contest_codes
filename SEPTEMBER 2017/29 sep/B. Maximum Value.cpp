#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(int i=(a);i<(b);i++)
#define fd(i,a,b)      for(int i=(a);i>(b);i--)
#define x              first
#define y              second
#define si(a)          scanf("%d",&a)
#define sii(a,b)       scanf("%d %d",&a,&b)
#define siii(a,b,c)    scanf("%d %d %d",&a,&b,&c)
#define sl(a)          scanf("%I64d",&a)
#define sint(a,b)       scanf("%I64d %I64d",&a,&b)
#define sintl(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c);
#define pfci(n,ans)    printf("Case %I64d: %d\n",n,ans)
#define pfcl(n,ans)    printf("Case %I64d: %I64d\n",n,ans)
#define pfcd(n,ans)    printf("Case %I64d: %lf\n",n,ans)
#define pb             push_back
#define aint(v)         v.begin(),v.end()
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
    int n;
    cin>>n;
    vector<int>vc;
    int a;
    map<int,int>marked;
    f(i,0,n)
    {
        scanf("%intd", &a);
        vc.pb(a);
        marked[a]=-1;
    }
    int mx=0;
    sort(vc.begin(),vc.end());
    f(i,0,n)
    {
        if(marked[vc[i]]==-1)
        {
            if(vc[i]>1)
            {
                std::vector<int>::iterator up;

                int pow= vc[n-1]/vc[i];

                f(j,2,pow+2)

                {
                    up= std::upper_bound (vc.begin(), vc.end(),vc[i]*j-1);
                    int it=(up - vc.begin());
                    if(it>0)
                        mx = max(mx, (vc[it-1]%vc[i]));
                }
            }
            marked[vc[i]]=1;
        }
    }
    cout<<mx<<endl;
}


