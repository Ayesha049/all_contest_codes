#include<bits/stdc++.h>
using namespace std;

int a,b,c;

void cal(int x1,int y1,int x2,int y2,int x3,int y3)
{
    a=y1-y2;
    b=x2-x1;
    c=x3*a+y3*b;
}

double calx(int a1,int b1,int c1,int a2,int b2,int c2)
{
    double ans;
    if(a1*b2!=b1*a2)
    {
        ans=(-b1*c2+c1*b2)/(a1*b2-b1*a2);
        return ans;
    }
    return 0;

}

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<"3"<<endl;
    int a1,b1,c1;
    int a2,b2,c2;
    cal(x1,y1,x2,y2,x3,y3);
    a1=a;
    b1=b;
    c1=c;
    cout<<a1<<b1<<c1<<endl;
    cal(x1,y1,x3,y3,x2,y2);
    a2=a;
    b2=b;
    c2=c;
    cout<<a1<<b1<<c1<<endl;
    double x=calx(a1,b1,c1,a2,b2,c2);
    double y;
    if(a1*b2!=b1*a2)
    {
        y=(-a2*c1+a1*c2)/(a1*b2-b1*a2);
    }
    cout<<x<<" "<<y<<endl;
    cal(x2,y2,x3,y3,x1,y1);
    a1=a;
    b1=b;
    c1=c;
    cal(x2,y2,x1,y1,x3,y3);
    a2=a;
    b2=b;
    c2=c;
    x=calx(a1,b1,c1,a2,b2,c2);

    if(a1*b2!=b1*a2)
    {
        y=(-a2*c1+a1*c2)/(a1*b2-b1*a2);
    }
    cout<<x<<" "<<y<<endl;
    cal(x3,y3,x2,y2,x1,y1);
    a1=a;
    b1=b;
    c1=c;
    cal(x3,y3,x1,y1,x2,y2);
    a2=a;
    b2=b;
    c2=c;
    x=calx(a1,b1,c1,a2,b2,c2);
    if(a1*b2!=b1*a2)
    {
        y=(-a2*c1+a1*c2)/(a1*b2-b1*a2);
    }
    cout<<x<<" "<<y<<endl;
}
