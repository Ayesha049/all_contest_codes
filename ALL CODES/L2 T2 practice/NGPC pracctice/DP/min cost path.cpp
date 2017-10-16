#include<bits/stdc++.h>
using namespace std;

int memo[100][100];
int n,m;
int cost[100][100];

int mn(int x,int y,int z)
{
    int xx=min(x,y);
    return min(xx,z);
}

int path(int i,int j)
{

    if(i>=n || j>=m)
        return INFINITY;
    if(i==n-1 && j==m-1)
        return cost[i][j];
    if(memo[i][j]==0)
    {
        memo[i][j]= cost[i][j]+mn(path(i+1,j+1),path(i+1,j),path(i,j+1));;
    }
    return memo[i][j];



    /*if(i==n-1 && j==m-1)
        return cost[i][j];
    else
        return cost[i][j]+mn(path(i+1,j+1),path(i+1,j),path(i,j+1));*/


}

int main()
{

    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>cost[i][j];
        }
    }
    cout<<path(0,0);
}

/*
3 3
1 2 3
4 8 2
1 5 3
*/
