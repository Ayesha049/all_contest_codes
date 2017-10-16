#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(int i=(a);i<(b);i++)
#define fd(i,a,b)      for(int i=(a);i>(b);i--)
#define x              first
#define y              second
#define si(a)          scanf("%d",&a)
#define sii(a,b)       scanf("%d %d",&a,&b)
#define siii(a,b,c)    scanf("%d %d %d",&a,&b,&c)
#define sl(a)          scanf("%I64d",&a)
#define sint(a,b)       scanf("%I64d %I64d",&a,&b)
#define sintl(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c);
#define pfci(n,ans)    printf("Case %I64d: %d\n",n,ans)
#define pfcl(n,ans)    printf("Case %I64d: %I64d\n",n,ans)
#define pfcd(n,ans)    printf("Case %I64d: %lf\n",n,ans)
#define pb             push_back
#define aint(v)         v.begin(),v.end()
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
    int n, money;
    cin>>n>>money;
    vector<int>vc;
    int a;
    f(i,0,n)
    {
        cin>>a;
        vc.pb(a);
    }
    int low= 0;
    int high = n;
    int ans=0;
    int cost=0;
    map<int,int>mpp;
    while(low<=high)
    {
        int mid= (low+high)/2;

        vector<int>cst;
        f(i,0,n)
        {
            cst.pb(vc[i]+((i+1)*mid));
        }
        sort(cst.begin(),cst.end());
        int cnt=0;
        int xx=0;
        f(i,0,n)
        {
            if(cst[i]>(money-xx)) break;
            cnt++;
            xx+=cst[i];
        }

        if(cnt>=mid)
        {
            //cout<<"fjrbf";
            ans=mid;
            if(mpp[ans]==0) mpp[ans]=xx;
            else mpp[ans] = min(mpp[ans],xx);
            low=mid+1;
        }
        else high= mid-1;
    }
    //cout<<ans<<endl;
    cost= mpp[ans];
    if(ans==0) cost=0;


    cout<<ans<<" "<<cost<<endl;
}


