#include<bits/stdc++.h>
using namespace std;

int callen(int x1,int y1,int x2,int y2)
{
    return ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int isright(int a,int b,int c)
{
    int flag=0;
    if(a==0||b==0||c==0)
        return 0;
    if((a+b==c) || (a+c==b) || (b+c==a) )
        flag=1;
    return flag;
}

int isalmost(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int a=callen(x1+1,y1,x2,y2);
    int b=callen(x1+1,y1,x3,y3);
    int c=callen(x2,y2,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f1=isright(a,b,c);
    a=callen(x1-1,y1,x2,y2);
    b=callen(x1-1,y1,x3,y3);
    c=callen(x2,y2,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f2=isright(a,b,c);
    a=callen(x1,y1+1,x2,y2);
    b=callen(x1,y1+1,x3,y3);
    c=callen(x2,y2,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f3=isright(a,b,c);
    a=callen(x1,y1-1,x2,y2);
    b=callen(x1,y1-1,x3,y3);
    c=callen(x2,y2,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f4=isright(a,b,c);
    a=callen(x1,y1,x2+1,y2);
    b=callen(x1,y1,x3,y3);
    c=callen(x2+1,y2,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f5=isright(a,b,c);
    a=callen(x1,y1,x2-1,y2);
    b=callen(x1,y1,x3,y3);
    c=callen(x2-1,y2,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f6=isright(a,b,c);
    int ff1= (f1||f2||f3||f4||f5||f6);

    a=callen(x1,y1,x2,y2+1);
    b=callen(x1,y1,x3,y3);
    c=callen(x2,y2+1,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f7=isright(a,b,c);
    a=callen(x1,y1,x2,y2);
    b=callen(x1,y1,x3+1,y3);
    c=callen(x2,y2,x3+1,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f8=isright(a,b,c);
    a=callen(x1,y1,x2,y2);
    b=callen(x1,y1,x3-1,y3);
    c=callen(x2,y2,x3-1,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f9=isright(a,b,c);
    a=callen(x1,y1,x2,y2-1);
    b=callen(x1,y1,x3,y3);
    c=callen(x2,y2-1,x3,y3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f10=isright(a,b,c);
    a=callen(x1,y1,x2,y2);
    b=callen(x1,y1,x3,y3+1);
    c=callen(x2,y2,x3,y3+1);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f11=isright(a,b,c);
    a=callen(x1,y1,x2,y2);
    b=callen(x1,y1,x3,y3-1);
    c=callen(x2,y2,x3,y3-1);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    int f12=isright(a,b,c);
    int ff2= (f7||f8||f9||f10||f11||f12);
    return ff1||ff2;
}

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int a=callen(x1,y1,x2,y2);
    int b=callen(x1,y1,x3,y3);
    int c=callen(x2,y2,x3,y3);
    //cout<<a<<" "<<b<<" "<<c;
    if(isright(a,b,c)==1)
        cout<<"RIGHT"<<endl;
    else
    {
        if(isalmost(x1,y1,x2,y2,x3,y3)==1)
            cout<<"ALMOST"<<endl;
        else
            cout<<"NEITHER"<<endl;
    }
}
