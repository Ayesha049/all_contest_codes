#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int x1,x2,x3,point;
    cin>>x1>>x2>>x3;
    int sum;
    if((x1>=x2 && x1<=x3)||(x1<=x2 && x1>=x3))
    {
        point=x1;
        int d1=abs(x2-x1);
        int d2=abs(x1-x3);
        sum=d1+d2;
    }
    else if((x2>=x1 && x2<=x3)||(x2<=x1 && x2>=x3))
    {
        point=x2;
        int d1=abs(x2-x1);
        int d2=abs(x2-x3);
        sum=d1+d2;
    }
    else
    {
        point=x3;
        int d1=abs(x3-x1);
        int d2=abs(x2-x3);
        sum=d1+d2;
    }

        cout<<sum;

}
