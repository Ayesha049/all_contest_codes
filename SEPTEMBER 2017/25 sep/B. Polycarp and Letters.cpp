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
    map<char,int>mpp;
    vector<int>up;
    int mx=0;
    /*int ii=0;
    while(s[i]>='a' && s[i]<='z')
    {
        i++;
        if(i==n) break;
        if(mpp[s[i]==0]) mx++;
        mpp[s[i]]++;
    }*/
    up.pb(-1);
    f(i,0,n)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            up.pb(i);
        }
    }
    up.pb(n);
    f(i,0,up.size()-1)
    {
        int a= up[i];
        int b= up[i+1];
        map<int,int>mpp1;
        int cnt=0;
        f(j,a+1,b)
        {
            if(mpp1[s[j]]==0) cnt++;
            mpp1[s[j]]++;
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;

}


