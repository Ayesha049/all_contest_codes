#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[11][11];
    for(int i=1;i<=10;i++)
    {
        mat[1][i]=1;
        mat[i][1]=1;
    }
    for(int i=2;i<=10;i++)
    {
        for(int j=2;j<=10;j++)
        {
            mat[i][j]=mat[i-1][j]+mat[i][j-1];
        }
    }
    int n;
    cin>>n;
    cout<<mat[n][n]<<endl;
}
