#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=0;
    int ind=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]-arr[i]>c)
        {
            if(arr[i-1]-arr[i]>mx)
            {
                mx=arr[i-1]-arr[i];
                ind=i;
            }

        }
    }
    if(ind==-1)
        cout<<"0"<<endl;
    else
    {
        cout<<mx-c<<endl;
    }
}
