#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        temp[i]=arr[i];
    }
    sort(temp,temp+n);
    int l=-1;
    int r=-1;
    for(int i=0;i<n;i++)
    {
        if(l==-1 && arr[i]!=temp[i])
        {
            l=i;
        }
        else if(l!=-1 && arr[i]!=temp[i])
        {
            r=i;
        }
    }
    int flag=0;
    if(l==r)
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
    }
    else
    {
        for(int i=l;i<r;i++)
        {
            if(arr[i]<arr[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;
        }
        else
            cout<<"no"<<endl;
    }

}
