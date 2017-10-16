#include<bits/stdc++.h>
using namespace std;

int bsearch(int *arr,int n,int a)
{
    int l=0;
    int r=n-1;
    int ans=-1;
    while(r>=l)
    {
        int mid=(r+l)/2;
        if(a>=arr[mid])
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        int ans=bsearch(arr,n,a);
        cout<<ans+1<<endl;
    }

}
