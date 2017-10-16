#include<bits/stdc++.h>
using namespace std;

char arr[1001][1001];
int main()
{
    int n,m,k;
    cin>>n;
    m=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int flag=0;
    int ans;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i==1)
            {
                if(j==1)
                {
                    int cnt=0;
                    if(arr[i][j+1]=='o') cnt++;
                    if(arr[i+1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                else if(j==m)
                {
                    int cnt=0;
                    if(arr[i][j-1]=='o') cnt++;
                    if(arr[i+1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    int cnt=0;
                    if(arr[i][j+1]=='o') cnt++;
                    if(arr[i][j-1]=='o') cnt++;
                    if(arr[i+1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else if(i==n)
            {

                if(j==1)
                {
                    int cnt=0;
                    if(arr[i][j+1]=='o') cnt++;
                    if(arr[i-1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                else if(j==m)
                {
                    int cnt=0;
                    if(arr[i][j-1]=='o') cnt++;
                    if(arr[i-1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    int cnt=0;
                    if(arr[i][j+1]=='o') cnt++;
                    if(arr[i][j-1]=='o') cnt++;
                    if(arr[i-1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else
            {
                if(j==1)
                {
                    int cnt=0;
                    if(arr[i][j+1]=='o') cnt++;
                    if(arr[i-1][j]=='o') cnt++;
                    if(arr[i+1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                else if(j==m)
                {
                    int cnt=0;
                    if(arr[i][j-1]=='o') cnt++;
                    if(arr[i-1][j]=='o') cnt++;
                    if(arr[i+1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    int cnt=0;
                    if(arr[i][j+1]=='o') cnt++;
                    if(arr[i][j-1]=='o') cnt++;
                    if(arr[i-1][j]=='o') cnt++;
                    if(arr[i+1][j]=='o') cnt++;
                    if(cnt%2!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1) break;
    }



    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


