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
    pair<int,int>last;
    int n,d;
    cin>>n>>d;
    if(n<=2)
    {
        cout<<"0\n";
        return 0;
    }
    vector<int>points;
    int a;
    f(i,0,n)
    {
        si(a);
        points.pb(a);
    }
    int l=0;
    int r=l+2;
    int cnt=0;
    last=mp(-1,-1);
    while(1)
    {

        if(l>=n || r>=n)
        {

        }
        if(points[r]-points[l]<d)
        {
            r++;
            cout<<r<<"jdjdjds   "<<l<<endl;
        }
        else if(points[r]-points[l]==d)
        {
            int k= (r-l+1);
            cnt+=k*(k+1)/2;
            cout<<l<<" "<<r<<endl;
            /*if(last!= mp(-1,-1))
            {
                int lll = max(l,last.first);
                int rr = min(r,last.second);
                dif= rr-lll+1;
                if(dif==3) cnt--;
                else if(dif>3)
                {
                    int tt = dif*(dif-1)*(dif-2)/6;
                    cnt-=tt;
                }
            }*/
            last = mp(l,r);
            l++;
            r++;
        }
        else
        {
            int dif = (r-l);
            cnt+= dif*(dif+1)/2;
            /*if(last!= mp(-1,-1))
            {
                int lll= max(l,last.first);
                int rr= min(r-1,last.second);
                dif= rr-lll+1;
                if(dif==3) cnt--;
                else if(dif>3)
                {
                    int tt = dif*(dif-1)*(dif-2)/6;
                    cnt-=tt;
                }
            }*/
            cout<<l<<"ygdyu "<<r<<endl;
            last = mp(l,r-1);
            l++;

        }
    }
    cout<<cnt<<endl;
}


