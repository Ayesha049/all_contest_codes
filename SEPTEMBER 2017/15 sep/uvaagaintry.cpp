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
#define double long double

class person
{
public:
    int x;
    int y;
    int z;
    person(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
};



int main()
{
    int n;

    int var=0;
    while(cin>>n)
    {
        var++;
        if(n==0) return 0;
        int a,b,c;
        vector<person> vc;
        f(i,0,n)
        {
            cin>>a>>b>>c;
            person obj(a,b,c);
            vc.pb(obj);
        }
        int flag=0;
        int time;
        f(i,1,1000000)
        {
            int cnt=0;
            f(j,0,n)
            {
                vc[j].z=vc[j].z%(vc[j].x+vc[j].y);
                if(vc[j].z==0) vc[j].z=(vc[j].x+vc[j].y);

                if(vc[j].z<=vc[j].x)
                {
                    cnt++;
                    //cout<<"1 ";
                }
                //else cout<<"0"<<" ";

                //(vc[j].z)++;
            }
            //cout<<endl;
            if(cnt==n)
            {
                flag=1;
                time=i;
                break;
            }
            //if(cnt>(n-cnt))
            //{
                f(j,0,n)
                {

                    if(vc[j].z==(vc[j].x) && cnt>=(n-cnt))
                    {
                        vc[j].z=1;
                        //cout<<j<<endl;
                    }
                    else (vc[j].z)++;
                }

            //}


        }
        if(flag==1) cout<<"Case "<<var<<": "<<time<<endl;
        else cout<<"Case "<<var<<": -1"<<endl;
    }
}



