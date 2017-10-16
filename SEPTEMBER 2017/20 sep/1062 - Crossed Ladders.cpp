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
//#define double long double

struct PT
{
    double x, y;
    PT() {}
    PT(double x, double y) : x(x), y(y) {}
    PT(const PT &p) : x(p.x), y(p.y)    {}
    PT operator + (const PT &p)  const
    {
        return PT(x+p.x, y+p.y);
    }
    PT operator - (const PT &p)  const
    {
        return PT(x-p.x, y-p.y);
    }
    PT operator * (double c)     const
    {
        return PT(x*c,   y*c  );
    }
    PT operator / (double c)     const
    {
        return PT(x/c,   y/c  );
    }
};



double dot(PT p, PT q)
{
    return p.x*q.x+p.y*q.y;
}
double dist2(PT p, PT q)
{
    return dot(p-q,p-q);
}
double cross(PT p, PT q)
{
    return p.x*q.y-p.y*q.x;
}
ostream &operator<<(ostream &os, const PT &p)
{
    os << "(" << p.x << "," << p.y << ")";
}


PT ComputeLineIntersection(PT a, PT b, PT c, PT d)
{
    b=b-a;
    d=c-d;
    c=c-a;
    assert(dot(b, b) > EPS && dot(d, d) > EPS);
    return a + b*cross(c, d)/cross(b, d);
}

int cmp(double x, double y)
{
    return (x <= y + EPS) ? (x + EPS < y) ? -1 : 0 : 1;
}

int main()
{
    double x,y,c;
    while(cin>>x>>y>>c)
    {
        double lo=0, hi=min(x,y);
        double mid= (hi+lo)/2;
        while (fabs(lo-hi)<=EPS || lo<hi)
        {
            mid= (hi+lo)/2;
            double a= sqrt(x*x-mid*mid);
            double b= sqrt(y*y-mid*mid);
            PT h = ComputeLineIntersection(PT(0, 0), PT(mid, a), PT(0, b), PT(mid, 0));
            if (fabs(lo-hi)<=EPS)
                break;
            if (h.y>c)
                lo = mid;
            else
                hi = mid;
        }
        printf("%.3lf\n", mid);
    }


}




