#include<iostream>
#include<stdio.h>>
using namespace std;

int main()
{
    int test;
    while(scanf("%d",&test)!=-1)
    {
        for(int i=test;i>0;i--)
        {
            int f;
            cin>>f;
            int sum=0;
            while(f>0)
            {
                f--;
                int x1,x2,x3;
                cin>>x1>>x2>>x3;
                sum=sum+(x1*x3);
            }
            cout<<sum<<endl;;
        }
    }
}
