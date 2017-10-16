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
    vector<int>input;
    int a;
    vector<int>pos[n+2];
    f(i,0,n)
    {
        si(a);
        input.pb(a);
        pos[a].pb(i);
    }
    vector<int>ele;
    vector<int>pos1;
    map<int,int>mpp;
    int cnt=0;
    f(i,0,n)
    {
        if(pos[i+1].size()==0)
        {
            ele.pb(i+1);
            cnt++;
        }
        else if(pos[i+1].size()>1)
        {
            ele.pb(i+1);
            mpp[i+1]=pos[i+1].size();
            f(j,0,pos[i+1].size())
            {
                pos1.pb(pos[i+1][j]);
            }
        }
    }
    sort(ele.begin(),ele.end());
    sort(pos1.begin(),pos1.end());
    int ii=0;
    f(i,0,pos1.size())
    {
        if(mpp[input[pos1[i]]]>1)
        {
            mpp[input[pos1[i]]]--;
            input[pos1[i]]=ele[i];
        }
        //cout<<pos1[i]<<" "<<ele[i]<<endl;
    }
    cout<<cnt<<endl;
    f(i,0,n) cout<<input[i]<<" ";
}


