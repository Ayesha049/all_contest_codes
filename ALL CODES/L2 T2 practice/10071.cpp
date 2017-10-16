#include<iostream>
#include<stdio.h>>
using namespace std;

int main()
{
    float v,t;
    while(scanf("%f %f", &v, &t)!=-1)
    {
        if(t!=0)
        {
            //cout<<v<<endl<<t<<endl;
            double a=(v/t);
            //cout<<a<<endl;
            double s=(.5*a*(2*t)*(2*t));
            cout<<s<<endl;
        }
        else
            cout<<0<<endl;
    }


}
