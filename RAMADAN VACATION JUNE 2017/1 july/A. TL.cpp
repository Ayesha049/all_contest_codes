#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ans=-1;
    int arr1[101];
    int arr2[101];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int x=arr1[0]*2;
    int y=arr1[n-1];
    if(x<arr2[0])
    {
        if(x<y)
        {
            if(y<arr2[0]) ans=y;
        }
        else ans=x;
    }
    cout<<ans<<endl;
}

