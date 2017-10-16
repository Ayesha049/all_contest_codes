#include<iostream>
#include<math.h>
using namespace std;

double det(double a1,double b1,double a2,double b2)
{
    int xx=a1*b2;
    int yy=b1*a2;
    return xx-yy;
}

double area(double radius)
{
    return 3.14159*radius*radius;
}

int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double A1= (-2*(x1-x2));
    double B1= (-2*(y1-y2));
    double C1= ((x1*x1+y1*y1)-(x2*x2+y2*y2));
    double A2= (-2*(x2-x3));
    double B2= (-2*(y2-y3));
    double C2= ((x2*x2+y2*y2)-(x3*x3+y3*y3));
    double x=(det(B1,C1,B2,C2))/(det(A1,B1,A2,B2));
    double y=(det(C1,A1,C2,A2))/(det(A1,B1,A2,B2));
    double rd=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    cout<<A1<<endl<<B1<<endl<<C1<<endl<<A2<<endl<<B2<<endl<<C2<<endl<<x<<y<<endl<<rd<<endl<<area(rd);
}
