#include<bits/stdc++.h>
using namespace std;

char arr[101][101];
char temp[101][101];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) cin>>arr[i][j];
    }
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        if(flag==0)
        {
            int f=0;
            for(int j=1; j<=m; j++)
            {
                if(f==0)
                {
                    temp[i][j]='W';
                    f=1;
                }
                else
                {
                    temp[i][j]='B';
                    f=0;
                }

            }
            flag=1;
        }
        else
        {
            int f=0;
            for(int j=1; j<=m; j++)
            {
                if(f==1)
                {
                    temp[i][j]='W';
                    f=0;
                }
                else
                {
                    temp[i][j]='B';
                    f=1;
                }

            }
            flag=0;
        }
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            if(arr[i][j]!='-')  cout<<temp[i][j];
            else cout<<arr[i][j];
        cout<<endl;
    }

}

