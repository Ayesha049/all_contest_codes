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

char color[100001];

int main()
{
    ll n;
    cin>>n;
    list<int>*arr;
    arr=new list<int>[n+1];
    f(i,0,n-1)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    ll red=1,blue=0;

    color[1]='r';
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int u;
            u=q.front();
            q.pop();
        if(color[u]=='r')
        {
            list<int>::iterator it;
            for (it = arr[u].begin(); it != arr[u].end(); ++it)
            {
                //cout<<(*it)<<" ";
                if(color[*it]==0)
                {
                    blue++;
                    color[*it]='b';
                    q.push(*it);
                }
            }
        }
        else if(color[u]=='b')
        {
            //cout<<i<<" ";
            list<int>::iterator it;
            for (it = arr[u].begin(); it != arr[u].end(); ++it)
            {

                if(color[*it]==0)
                {
                    //cout<<(*it)<<" ";
                    red++;
                    color[*it]='r';
                    q.push(*it);
                }
            }
        }
    }
    //cout<<red<<" "<<blue<<endl;
    ll ans= red*blue;
    ans-=(n-1);
    cout<<ans<<endl;
}
