#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[5000];
    int arr2[5000];
    int arr3[5000];
    int x1=0,x2=0,x3=0;
    int var;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            arr1[x1++]=i;
        }
        else if(a==2)
        {
            arr2[x2++]=i;
        }
        else if(a==3)
        {
            arr3[x3++]=i;
        }
    }
    if(x1<x2)
    {
        if(x1<x3)
            var=x1;
        else
            var=x3;
    }
    else
    {
        if(x2<x3)
            var=x2;
        else
            var=x3;
    }
    cout<<var<<endl;
    for(int i=0;i<var;i++)
    {
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
    }

}
