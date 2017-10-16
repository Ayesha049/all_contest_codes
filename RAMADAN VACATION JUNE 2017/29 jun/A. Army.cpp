#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[101];
    for(int i=1;i<n;i++) cin>>arr[i];
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<b;i++) ans+=arr[i];
    cout<<ans<<endl;
}

