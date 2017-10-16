#include<bits/stdc++.h>
using namespace std;

int mn(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

int mx(int a,int b)
{
    if(a<b)
        return b;
    return a;
}


int main()
{
    char arr1[1000];
    char arr2[1000];
    int n;
    cin>>n;
    cin>>arr1>>arr2;

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        int a=mn(arr1[i],arr2[i]);
        int b=mx(arr1[i],arr2[i]);
        int xx=(b-a);
        int yy=(10-b)+a;
        cnt=cnt+mn(xx,yy);
    }

    cout<<cnt<<endl;
}
