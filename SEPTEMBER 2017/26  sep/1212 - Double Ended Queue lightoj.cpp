
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
#define EPS 1e-15
//#define double long double
#define PI acos(-1.0)


void solve()
{
    int sz,command;
    cin>>sz>>command;
    int cnt=0;
    int arr[1000];
    f(i,0,1000) arr[i]=-1;
    int l=500,r=501;
    while(command--)
    {
        string s;
        cin>>s;
        if(s=="pushLeft")
        {
            int a;
            cin>>a;
            if(cnt<sz)
            {
                arr[l--]=a;
                cnt++;
                cout<<"Pushed in left: "<<a<<endl;
            }
            else cout<<"The queue is full\n";
        }
        if(s=="pushRight")
        {
            int a;
            cin>>a;
            if(cnt<sz)
            {
                arr[r++]=a;
                cnt++;
                cout<<"Pushed in right: "<<a<<endl;
            }
            else cout<<"The queue is full\n";
        }
        if(s=="popLeft")
        {
            if(cnt==0) cout<<"The queue is empty\n";
            else
            {
                cout<<"Popped from left: "<<arr[l+1]<<endl;
                if(l<r)
                {
                    l++;
                }
                else
                {
                    l++;
                    r=l+1;
                }
                cnt--;
            }
        }
        if(s=="popRight")
        {
            if(cnt==0) cout<<"The queue is empty\n";
            else
            {
                cout<<"Popped from right: "<<arr[r-1]<<endl;
                if(l<r)
                {
                    r--;
                }
                else
                {
                    r--;
                    l=r-1;
                }
                cnt--;
            }
        }
    }

}

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; ++i)
    {
        printf("Case %d:\n", i + 1);
        solve();
    }
    return 0;
}



