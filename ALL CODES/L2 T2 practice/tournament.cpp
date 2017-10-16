#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int win[n+1];
    int a=(n*(n-1))/2;
    for(int i=1;i<=n;i++)
    {
        arr[i]=0;
        win[i]=0;
    }
    for(int i=1;i<a;i++)
    {
        int a,b;
        cin>>a>>b;
        win[a]++;
        arr[a]++;
        arr[b]++;
    }
    int ans[2];
    int ind=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==(n-2))
            ans[ind++]=i;
    }
    int aa=win[ans[0]];
    int bb=win[ans[1]];
    if(aa>bb)
    {
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    else if(aa<=bb)
    {
        cout<<ans[1]<<" "<<ans[0]<<endl;
    }
}
