#include<bits/stdc++.h>
using namespace std;

char arr[301][301];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>arr[i][j];
    int flag=0;
    char x;
    if(arr[1][1]==arr[1][n]) x=arr[1][1];
    else flag=1;
    if(flag==0)
    {
        if(arr[1][2]==x) flag=1;
    }
    if(flag==0)
    {
        for(int i=1; i<=n; i++)
        {
            if(arr[i][i]!=x)
            {
                flag=1;
                break;

            }
            else arr[i][i]='*';
        }
        if(flag==0)
        {
            for(int i=1; i<=n; i++)
            {
                if(arr[i][n-i+1]!=x)
                {
                    if(arr[i][n-i+1]!='*')
                    {
                        flag=1;
                        break;
                    }
                }
                else arr[i][n-i+1]='*';
            }
        }
        if(flag==0)
        {
            char y=arr[1][2];
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(arr[i][j]!='*')
                    {
                        if(arr[i][j]!=y)
                        {
                            flag=1;
                            break;
                        }
                    }

                }
                if(flag==1) break;

            }
        }

    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

