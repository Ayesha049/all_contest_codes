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



struct PT {
  double x, y;
  PT() {}
  PT(double x, double y) : x(x), y(y) {}
  PT(const PT &p) : x(p.x), y(p.y)    {}
  PT operator + (const PT &p)  const { return PT(x+p.x, y+p.y); }
  PT operator - (const PT &p)  const { return PT(x-p.x, y-p.y); }
  PT operator * (double c)     const { return PT(x*c,   y*c  ); }
  PT operator / (double c)     const { return PT(x/c,   y/c  ); }
};

double dot(PT p, PT q)     { return p.x*q.x+p.y*q.y; }
double dist2(PT p, PT q)   { return dot(p-q,p-q); }
double cross(PT p, PT q)   { return p.x*q.y-p.y*q.x; }


PT RotateCCW90(PT p)   { return PT(-p.y,p.x); }
PT RotateCW90(PT p)    { return PT(p.y,-p.x); }
PT RotateCCW(PT p, double t) {
  return PT(p.x*cos(t)-p.y*sin(t), p.x*sin(t)+p.y*cos(t));
}


PT ComputeLineIntersection(PT a, PT b, PT c, PT d) {
  b=b-a; d=c-d; c=c-a;
  assert(dot(b, b) > EPS && dot(d, d) > EPS);
  return a + b*cross(c, d)/cross(b, d);
}


PT ComputeCircleCenter(PT a, PT b, PT c) {
  b=(a+b)/2;
  c=(a+c)/2;
  return ComputeLineIntersection(b, b+RotateCW90(a-b), c, c+RotateCW90(a-c));
}

int main()
{
    double ax,ay,bx,by,cx,cy;
    while(cin>>ax>>ay>>bx>>by>>cx>>cy)
    {

        PT centre= ComputeCircleCenter(PT(ax,ay),PT(bx,by),PT(cx,cy));
        //cout<<centre.x<<" "<<centre.y<<endl;
        double radius = sqrt(dist2(centre, PT(bx,by)));

        //cout<<radius<<endl;

        char one='-';
        char two='-';
        double g,f,c;
        g=(-2)*(centre.x);
        f=(-2)*(centre.y);
        c=(centre.x*centre.x)+(centre.y*centre.y)-(radius*radius);

        if(centre.x<0)
        {
            one='+';
            centre.x=(-1.0)*(centre.x);
        }
        if(centre.y<0)
        {
            two='+';
            centre.y=(-1.0)*(centre.y);
        }

        printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n",one,centre.x,two,centre.y,radius);

        one='+';
        two='+';
        char three='+';




        //cout<<endl<<endl<<centre.x<<" "<<centre.y<<" "<<c<<endl<<endl;

        if(g<0)
        {
            one='-';
            g=(-1.0)*(g);
        }
        if(f<0)
        {
            two='-';
            f=(-1.0)*(f);
        }
        if(c<0)
        {
            three='-';
            c=(-1.0)*(c);
        }



        printf("x^2 + y^2 %c %.3lfx %c %.3lfy %c %.3lf = 0\n",one,g,two,f,three,c);
        cout<<endl;



    }
}


