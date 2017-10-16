#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int price[n+1];
    int value[n+1];

    value[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>price[i];
    }

    for(int i=1;i<=n;i++)
    {
        int mx=0;
        for(int j=1;j<=i;j++)
        {
            mx=max(mx,price[j]+value[i-j]);
        }
        value[i]=mx;

    }
    cout<<value[n]<<endl;
}
