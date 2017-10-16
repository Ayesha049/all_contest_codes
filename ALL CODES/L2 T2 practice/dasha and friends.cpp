#include<bits/stdc++.h>
using namespace std;

int arr1[50];
int arr2[50];
int main()
{
    int flag=0;
    int n,l;
    cin>>n>>l;
    int a;
    cin>>a;
    int sm=0;
    for(int i=0; i<n-1; i++)
    {
        int b;
        cin>>b;
        arr1[i]=b-a;
        sm+=arr1[i];
        a=b;

    }
    a=(l-sm);
    arr1[n-1]=a;
    sm=0;
    cin>>a;
    for(int i=0; i<n-1; i++)
    {
        int b;
        cin>>b;
        arr2[i]=b-a;
        sm+=arr2[i];
        a=b;

    }
    a=(l-sm);
    arr2[n-1]=a;
    int fst;
    int f=0;
    for(int i=0; i<n; i++)
    {
        if(f==0)
        {
            if(arr1[0]==arr2[i])
            {
                f=1;
                fst=i;
                //break;
            }
        }
        else
        {
            if(arr1[0]==arr2[i])
            {
                fst++;
            }
            else
                break;
        }
    }
    for(int i=0; i<n; i++)
    {
        int xx=(fst+i)%n;
        //cout<<"xx1 "<<xx<<endl;
        if(arr1[i]!=arr2[xx])
        {
            flag=1;
            //cout<<"utycrweutf"<<endl;
            break;
        }
    }


    int flag1=0;
    f=0;
    for(int i=0; i<n; i++)
    {
        if(f==0)
        {
            if(arr2[0]==arr1[i])
            {
                f=1;
                fst=i;
                break;
            }
        }
        else
        {
            if(arr2[0]==arr1[i])
            {
                fst++;
            }
            else
                break;
        }
    }
    for(int i=0; i<n; i++)
    {
        int xx=(fst+i)%n;
        if(arr2[i]!=arr1[xx])
        {
            flag1=1;
            break;
        }
    }
    if(flag==1 && flag1==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
