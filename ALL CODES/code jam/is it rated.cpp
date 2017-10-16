#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i]=a;
        if(a!=b)
            flag=1;
    }
    if(flag==1)
        cout<<"rated"<<endl;
    else
    {
        int f=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]<arr[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"unrated"<<endl;
        else
            cout<<"maybe"<<endl;
    }


}
