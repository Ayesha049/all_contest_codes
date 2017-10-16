#include<bits/stdc++.h>
using namespace std;

int l[100002];
int r[100002];
int arr[100001];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[i-1]) l[i]=l[i-1]+1;
        else l[i]=1;
    }
    r[n]=1;
    for(int i=n-1;i>=1;i--)
    {
        if(arr[i]<arr[i+1]) r[i]=r[i+1]+1;
        else r[i]=1;
    }
    /*cout<<"l.... ";
    for(int i=0;i<=n+1;i++)
    {
        cout<<l[i]<<" ";
    }
    cout<<endl<<"r.... ";
    for(int i=0;i<=n+1;i++)
    {
        cout<<r[i]<<" ";
    }*/

    int ans=0;
    //ans=max(ans,(r[2]+1));
    arr[0]=-1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i+1]-arr[i-1]>1)
        {
            int aa=l[i-1];
            aa+=r[i+1];
            aa++;
            ans=max(aa,ans);
        }

    }
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,(l[i-1]+1));
    }
    for(int i=n;i>=1;i--)
    {
        ans=max(ans,(r[i+1]+1));
    }
    //ans=max(ans,(l[n-1]+1));
    cout<<ans<<endl;
}

