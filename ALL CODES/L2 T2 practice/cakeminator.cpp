#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        int cc=0;
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]!='.')
            {
                cc=1;
                break;
            }
        }
        if(cc==0)
        {
            for(int j=0; j<m; j++)
            {
                arr[i][j]='*';
                cnt++;
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        int cc=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j][i]=='S')
            {
                cc=1;
                break;
            }
        }
        if(cc==0)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[j][i]=='.')
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
