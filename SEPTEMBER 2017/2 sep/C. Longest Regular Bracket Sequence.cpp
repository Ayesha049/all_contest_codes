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

int d[1000001];
int c[1000001];

int main()
{
    string s;
    cin>>s;
    stack<int>st;
    f(i,0,s.length()) c[i]=-2;
    f(i,0,s.length())
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else
        {
            if(st.empty())
            {
                c[i]=-1;
                d[i]=-1;
            }
            else
            {
                int xx=st.top();
                st.pop();
                d[i]=xx;
                if(s[xx-1]==')' && c[xx-1]!=-1)
                {
                    c[i]=c[xx-1];
                }
                else c[i]=xx;
            }
        }
    }
    map<int,int>mp;
    int mx=-INFINITY;
    f(i,0,s.length())
    {
        //cout<<d[i]<<" "<<c[i]<<endl;
        if(c[i]>=0)
        {
            int dif=i-c[i]+1;
            mp[dif]++;
            mx=max(mx,dif);
        }
    }
    if(mp[mx]==0)
    {
        cout<<"0 1"<<endl;
    }
    else cout<<mx<<" "<<mp[mx]<<endl;
}


