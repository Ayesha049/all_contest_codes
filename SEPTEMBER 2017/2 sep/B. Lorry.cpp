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
    vector<pair<int,int> >one;
    vector<pair<int,int> >two;
    int a;
    int b;
    f(i,0,n)
    {
        sii(a,b);
        if(a==1)
        {
            one.pb(mp(b,i));
        }
        else two.pb(mp(b,i));
        //cout<<vc[i].x<<" "<<vc[i].y<<endl;
    }
    sort(one.begin(),one.end());
    reverse(one.begin(),one.end());
    sort(two.begin(),two.end());
    reverse(two.begin(),two.end());
    int sz1=one.size();
    int sz2=two.size();
    int p1=0;
    int p2=0;
    ll ans=0;
    int k1=k;
    vector<int>v;
    f(i,0,n)
    {
        if(k<=0) break;
        if(k==1)
        {
            if(p1<=sz1-1)
            {
                ans+=(ll)one[p1].x;
                v.pb(one[p1].y);
                break;
            }
        }
        else
        {
            int xx1=-1,xx2=-1;
            if(sz1!=0)
            {
                if(p1<=(sz1-2))
                {
                    xx1=one[p1].x+one[p1+1].x;
                }
            }
            if(sz2!=0)
            {
                if(p2<=(sz2-1))
                {
                    xx2=two[p2].x;
                }
            }
            if(!(xx1==-1 && xx2==-1))
            {
                if(xx1>xx2)
                {
                    ans+=(ll)(xx1);
                    v.pb(one[p1].y);
                    v.pb(one[p1+1].y);
                    p1+=2;
                }
                else
                {
                    ans+=(ll)xx2;
                    v.pb(two[p2].y);
                    p2++;
                }
                k-=2;
            }
        }


    }

    int p11=0;
    int p22=0;
    ll ans1=0;
    vector<int>v1;
    if(k1%2==1)
    {
        if(sz1>0)
        {
            ans1+=(ll)(one[p11].x);
            v1.pb(one[p11].y);
            p11++;
        }
        k1--;
    }

    f(i,0,n)
    {
        if(k1<=0) break;
        int xx1=-1,xx2=-1;
        if(sz1!=0)
        {
            if(p11<=(sz1-2))
            {
                xx1=one[p11].x+one[p11+1].x;
            }
        }
        if(sz2!=0)
        {
            if(p22<=(sz2-1))
            {
                xx2=two[p22].x;
            }
        }
        if(!(xx1==-1 && xx2==-1))
        {
            if(xx1>xx2)
            {
                ans1+=(ll)(xx1);
                v1.pb(one[p11].y);
                v1.pb(one[p11+1].y);
                p11+=2;
            }
            else
            {
                ans1+=(ll)xx2;
                v1.pb(two[p22].y);
                p22++;
            }
            k1-=2;
        }


    }

    if(ans>ans1)
    {
        cout<<ans<<endl;
        f(i,0,v.size()) cout<<v[i]+1<<" ";
    }
    else
    {
        cout<<ans1<<endl;
        f(i,0,v1.size()) cout<<v1[i]+1<<" ";
    }
}


