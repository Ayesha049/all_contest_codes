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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1,s2;
    f(i,0,n)
    {
        if(i%2==0)
        {
            s1+='r';
        }
        else s1+='b';
    }
    f(i,0,n)
    {
        if(i%2==0)
        {
            s2+='b';
        }
        else s2+='r';
    }
    int mx1=0,mx2=0;
    int b=0,r=0;
    f(i,0,n)
    {
        if(s[i]!=s1[i])
        {
            if(s[i]=='b') b++;
            else r++;
        }
    }
    mx1= max(b,r);
    b=0;
    r=0;
    f(i,0,n)
    {
        if(s[i]!=s2[i])
        {
            if(s[i]=='b') b++;
            else r++;
        }
    }
    mx2= max(b,r);
    //cout<<s1<<" "<<mx1<<" "<<s2<<" "<<mx2<<endl;
    cout<<min(mx1,mx2)<<endl;
}


