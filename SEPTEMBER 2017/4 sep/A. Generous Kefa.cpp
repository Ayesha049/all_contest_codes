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
    int n,f;
    cin>>n>>f;
    string s;
    cin>>s;
    map<char,int>mpp;
    vector<char>vc;
    f(i,0,n)
    {
        mpp[s[i]]++;
        if(mpp[s[i]]==1) vc.pb(s[i]);
    }
    int cnt=n;
    f(i,0,f)
    {
        f(j,0,vc.size())
        {
            if(mpp[vc[j]]>0)
            {
                mpp[vc[j]]--;
                cnt--;
            }
        }
    }
    if(cnt==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


