#include<bits/stdc++.h>
using namespace std;

char arr[1001][1001];
int main()
{
    int n,m,k;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    int ans;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(arr[i][j]=='P')
                if(i==1)
                {
                    if(j==1)
                    {

                        if(arr[i][j+1]=='W') {cnt++; arr[i][j+1]='.';}
                        if(arr[i+1][j]=='W') {cnt++; arr[i+1][j]='.';}

                    }
                    else if(j==m)
                    {

                        if(arr[i][j-1]=='W') {cnt++; arr[i][j-1]='.';}
                        if(arr[i+1][j]=='W') {cnt++; arr[i+1][j]='.';}

                    }
                    else
                    {

                        if(arr[i][j+1]=='W') {cnt++; arr[i][j+1]='.';}
                        if(arr[i][j-1]=='W') {cnt++; arr[i][j-1]='.';}
                        if(arr[i+1][j]=='W') {cnt++; arr[i+1][j]='.';}

                    }
                }
                else if(i==n)
                {

                    if(j==1)
                    {

                        if(arr[i][j+1]=='W') {cnt++; arr[i][j+1]='.';}
                        if(arr[i-1][j]=='W') {cnt++; arr[i-1][j]='.';}

                    }
                    else if(j==m)
                    {

                        if(arr[i][j-1]=='W') {cnt++; arr[i][j-1]='.';}
                        if(arr[i-1][j]=='W') {cnt++; arr[i-1][j]='.';}

                    }
                    else
                    {

                        if(arr[i][j+1]=='W') {cnt++; arr[i][j+1]='.';}
                        if(arr[i][j-1]=='W') {cnt++; arr[i][j-1]='.';}
                        if(arr[i-1][j]=='W') {cnt++; arr[i-1][j]='.';}

                    }
                }
                else
                {
                    if(j==1)
                    {

                        if(arr[i][j+1]=='W') {cnt++; arr[i][j+1]='.';}
                        if(arr[i-1][j]=='W') {cnt++; arr[i-1][j]='.';}
                        if(arr[i+1][j]=='W') {cnt++; arr[i+1][j]='.';}

                    }
                    else if(j==m)
                    {

                        if(arr[i][j-1]=='W') {cnt++; arr[i][j-1]='.';}
                        if(arr[i-1][j]=='W') {cnt++; arr[i-1][j]='.';}
                        if(arr[i+1][j]=='W') {cnt++; arr[i+1][j]='.';}

                    }
                    else
                    {

                        if(arr[i][j+1]=='W') {cnt++; arr[i][j+1]='.';}
                        if(arr[i][j-1]=='W') {cnt++; arr[i][j-1]='.';}
                        if(arr[i-1][j]=='W') {cnt++; arr[i-1][j]='.';}
                        if(arr[i+1][j]=='W') {cnt++; arr[i+1][j]='.';}

                    }
                }
        }

    }




    cout<<cnt<<endl;

}



