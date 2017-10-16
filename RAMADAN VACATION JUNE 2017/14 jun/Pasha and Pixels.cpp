#include<bits/stdc++.h>
using namespace std;

char arr[1001][1001];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            arr[i][j]=='0';
        }
    }
    int flag=0;
    int ans;
    for(int ii=0; ii<k; ii++)
    {
        int i,j;
        cin>>i>>j;
        arr[i][j]='1';
        if(flag==0)
        {
            if(i==1)
            {
                if(j==1)
                {
                    if((arr[i][j+1]=='1' && arr[i+1][j+1]=='1' && arr[i+1][j]=='1'))
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
                else if(j==m)
                {
                    if((arr[i][j-1]=='1' && arr[i+1][j-1]=='1' && arr[i+1][j]=='1') )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
                else
                {
                    if((arr[i][j+1]=='1' && arr[i+1][j+1]=='1' && arr[i+1][j]=='1') || (arr[i][j-1]=='1' && arr[i+1][j-1]=='1' && arr[i+1][j]=='1') )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
            }
            else if(i==n)
            {

                if(j==1)
                {
                    if((arr[i][j+1]=='1' && arr[i-1][j+1]=='1' && arr[i-1][j]=='1') )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
                else if(j==m)
                {
                    if((arr[i][j-1]=='1' && arr[i-1][j-1]=='1' && arr[i-1][j]=='1') )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
                else
                {
                    if((arr[i][j+1]=='1' && arr[i-1][j+1]=='1' && arr[i-1][j]=='1') || (arr[i][j-1]=='1' && arr[i-1][j-1]=='1' && arr[i-1][j]=='1')  )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
            }
            else
            {
                if(j==1)
                {
                    if((arr[i][j+1]=='1' && arr[i-1][j+1]=='1' && arr[i-1][j]=='1') || (arr[i][j+1]=='1' && arr[i+1][j+1]=='1' && arr[i+1][j]=='1')  )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
                else if(j==m)
                {
                    if((arr[i][j-1]=='1' && arr[i-1][j-1]=='1' && arr[i-1][j]=='1') || (arr[i][j-1]=='1' && arr[i+1][j-1]=='1' && arr[i+1][j]=='1')  )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
                else
                {
                    if((arr[i][j-1]=='1' && arr[i-1][j-1]=='1' && arr[i-1][j]=='1') || (arr[i][j-1]=='1' && arr[i+1][j-1]=='1' && arr[i+1][j]=='1') ||(arr[i][j+1]=='1' && arr[i-1][j+1]=='1' && arr[i-1][j]=='1') || (arr[i][j+1]=='1' && arr[i+1][j+1]=='1' && arr[i+1][j]=='1')  )
                    {
                        flag=1;
                        ans=ii+1;
                    }
                }
            }
        }
    }



    if(flag==0)
        cout<<"0"<<endl;
    else
        cout<<ans<<endl;
}


