#include<bits/stdc++.h>
using namespace std;

int arr[100];
int k,mul=1,x,n;

int mn(int x,int y,int z)
{
    int xx=min(x,y);
    return min(xx,z);
}

int dp(int i,int kk,int ml)
{
    cout<<ml<<endl;
    if(kk==k)
        return ml;
    if(i>n-1)
        return ml;
    return mn(dp(i,kk+1,(ml/arr[i])*(arr[i]+x)),dp(i,kk+1,(ml/arr[i])*(arr[i]-x)),dp(i+1,kk,ml));
}


int main()
{
    cin>>n>>k>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mul*=arr[i];
    }

    cout<<dp(0,0,mul);


}
