#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int q;
    cin>>q;
    int flag;

    for(int i=1;i<=q;i++)
    {
        int a,b;
        cin>>a>>b;

        for(int j=1;j<=m;j++)
        {
            flag=0;
            for(int k=a;k<=b-1;k++)
            {
                if(arr[k][j]>arr[k+1][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag==1)
            cout<<"No"<<endl;
        else if(flag==0)
            cout<<"Yes"<<endl;
    }
}
