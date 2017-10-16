#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[101][101];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a][b]=c;
    }
    int mn=1000000;
    int cost=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i][i+1]==-1)
        {
            cost+=arr[i+1][i];
        }
    }
    if(arr[n][1]==-1)
        cost+=arr[1][n];
    mn=cost;
    cost=0;
    if(arr[1][n]==-1)
        cost+=arr[n][1];
    for(int i=n;i>1;i--)
    {
        if(arr[i][i-1]==-1)
            cost+=arr[i-1][i];
    }
    if(cost<mn)
        mn=cost;
    cout<<mn<<endl;

}
