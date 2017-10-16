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
#define double long double
#define EPS 1e-7

int main()
{
    int n;
    cin>>n;
    vector<pair<double,double> >vc;
    double a;
    f(i,1,n+1)
    {
        cin>>a;
        vc.pb(mp(i,a));
    }
    f(i,1,n)
    {
        double rt=(vc[i].y-vc[0].y)/(vc[i].x-vc[0].x);
        //cout<<i<<"...."<<rt<<"..."<<endl;
        vector<pair<double,double> >v;
        f(j,1,n)
        {
            double r=(vc[j].y-vc[0].y)/(vc[j].x-vc[0].x);

            if(abs(r-rt)>EPS)
            {
                //cout<<j<<" ";
                v.pb(vc[j]);
            }
        }
        if(v.size()==0)
        {
            cout<<"No"<<endl;
            return 0;
        }
        else if(v.size()==1 || v.size()==(n-1))
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else
        {
            double rt1=(v[1].y-v[0].y)/(v[1].x-v[0].x);
            //cout<<rt1<<endl;
            if(abs(rt1-rt)<EPS)
            {
                int flag=0;
                f(j,1,v.size())
                {
                    double r=(v[j].y-v[0].y)/(v[j].x-v[0].x);
                    if(r!=rt1)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    double rt=(vc[2].y-vc[1].y)/(vc[2].x-vc[1].x);
    f(i,3,n)
    {
        double rt1=(vc[i].y-vc[1].y)/(vc[i].x-vc[1].x);
        if(abs(rt1-rt)>EPS)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}


