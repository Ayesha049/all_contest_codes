#include<iostream>
#include<stdio.h>
using namespace std;

int a,b,c,d,e,f,g,n;
int arr[10001];

int ff(int n)
{
    if(n==0)
    {
        return a;
    }
    if(n==1)
    {
        return b;
    }

    if(n==2)
    {
        return c;
    }
    if(n==3)
    {
        return d;
    }
    if(n==4)
    {
        return e;
    }
    if(n==5)
    {
        return f;
    }
    int x1,x2,x3,x4,x5,x6;
    if(arr[n-1]==-1)
        x1=ff(n-1);
    else
        x1=arr[n-1];
    if(arr[n-2]==-1)
        x2=ff(n-2);
    else
        x2=arr[n-2];
    if(arr[n-3]==-1)
        x3=ff(n-3);
    else
        x3=arr[n-3];
    if(arr[n-4]==-1)
        x4=ff(n-4);
    else
        x4=arr[n-4];
    if(arr[n-5]==-1)
        x5=ff(n-5);
    else
        x5=arr[n-5];
    if(arr[n-6]==-1)
        x6=ff(n-6);
    else
        x6=arr[n-6];
    return x1+x2+x3+x4+x5+x6;
}


int main()
{
    for(int i=0;i<=10000;i++)
        arr[i]=-1;
    int test;
    cin>>test;
    int i=0;
    while(test--)
    {
        i++;
        cin>>a>>b>>c>>d>>e>>f>>n;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        arr[3]=d;
        arr[4]=e;
        arr[5]=f;
        cout<<"Case "<<i<<": "<<ff(n)%10000007<<endl;
    }

}
