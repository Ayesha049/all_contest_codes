#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
char a[105][105];
int flag[105][105];
int flag1[105];
int sum,n,m;
char c;
int dx[4]= {1,-1,0,0};
int dy[4]= {0,0,-1,1};
void dfs(int x,int y)
{
    for(int i=0; i<4; i++)
    {
        int xx=dx[i]+x;
        int yy=dy[i]+y;
        if(a[xx][yy]>='A'&&a[xx][yy]<='Z'&&xx>=0&&yy>=0&&xx<n&&yy<m&&flag[xx][yy]==0)
        {
            flag[xx][yy]=1;
            if(a[xx][yy]==c)
                dfs(xx,yy);
            else if(flag1[a[xx][yy]-'A']==0)
            {
                flag1[a[xx][yy]-'A']=1;
                sum++;
            }
        }
    }
}
int main()
{
    int x,y;
    while(cin >> n >> m>>c)
    {
        for(int i=0; i<n; i++)
            cin >>a[i];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
              if(a[i][j]==c)
              {
                  x=i,y=j;
                  break;
              }
            }
        sum=0;
        memset(flag1,0,sizeof(flag1));
        memset(flag,0,sizeof(flag));
        dfs(x,y);
        printf("%d\n",sum);
    }
    return 0;
}

