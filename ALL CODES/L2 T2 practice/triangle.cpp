#include<iostream>
using namespace std;

int main()
{
    int a1,b1,c1,d1;
    cin>>a1>>b1>>c1>>d1;
    int A=a1+b1;
    int B=a1+c1;
    int C=a1+d1;
    int D=b1+c1;
    int E=b1+d1;
    int F=c1+d1;
    int f1=0;
    int f2=0;
    if(A>c1 && D>a1 && B>b1)
    {
        f1=1;
    }
    else if(A>d1 && E>a1 && C>b1)
    {
        f1=1;
    }
    else if(D>d1 && F>b1 && E>c1)
    {
        f1=1;
    }
    else if(B>d1 && F>a1 && C>c1)
    {
        f1=1;
    }
    else if(A==c1 || A==d1 || B==b1 || B==d1 || C==b1 || C==c1 || D==a1 ||D==d1 || E==a1 || E==c1 |F==b1 |F==a1)
    {
        f2=1;
    }

    if(f1==1)
        cout<<"TRIANGLE"<<endl;
    else if(f2==1)
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
}
