#include<iostream>
#include<math.h>
using namespace std;

int online(int x1,int y1,int x2,int y2,int x,int y)
{
    int xx=(x-x1)/(x1-x2);
    int yy=(y-y1)/(y1-y2);
    if(xx==yy)
        return 1;
    return 0;
}
int isangle(x1,y1,x2,y2,x3,y3)
{
    int xx=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    int yy=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    int zz=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    int cs=yy*yy+xx*xx-zz*zz;
    cs=cx/(2*xx*yy);
}

int main()
{
    int a1,b1,a2,b2,c1,d1,c2,d2,e1,f1,e2,f2;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>a1>>b1>>a2>>b2>>c1>>d1>>c2>>d2>>e1>>f1>>e2>>f2;
        int f1=0;
        int f22=0;
        int f3=0;
        if((a1==c1 && b1==d1) || (a1==c2 && b1==d2) || (a2==c1 && b2== d1) || (a2==c2 && b2==c2))
        {
            f1=1;
        }
        else if((a1==e1 && b1==f1) || (a1==e2 && b1==f2) || (a2==e1 && b2==f1) || (a2==e2 && b2==f2))
        {
            f22=1;
        }
        else if((c1==e1 && d1==f1) || (c1==e2 && d1==f2) || (c2==e1 && d2==f1) || (c2==e2 && d2==f2))
        {
            f3=1;
        }
        if(f1==0 && f22==0 && f3==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(f1==0)
            {
                int x=online(a1,b1,a2,b2,e1,f2);
                int y=online(c1,d1,c2,d2,e1,f1);
                if()
            }
        }
    }
}
