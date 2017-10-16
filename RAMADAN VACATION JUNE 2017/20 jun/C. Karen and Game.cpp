#include<bits/stdc++.h>
using namespace std;


int arr[101][101];
int out[101][101];
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>row;
    vector<int>col;
    for(int i=1; i<=n; i++)
    {
        int mn=INFINITY;
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
            mn=min(mn,arr[i][j]);
        }
        for(int j=1; j<=m; j++)
        {
            out[i][j]=mn;
        }
        //cout<<mn<<endl;

        row.push_back(mn);
    }
    int flag=0;
    for(int i=1; i<=m; i++)
    {
        if(arr[1][i]==out[1][i])
        {
            col.push_back(0);
        }
        else
        {
            int xx=arr[1][i]-out[1][i];
            for(int j=1; j<=n; j++)
            {
                out[j][i]+=xx;
            }
            col.push_back(xx);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            //cout<<out[i][j]<<" ";
            if(arr[i][j]!=out[i][j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1) break;
        //cout<<endl;
    }
    if(flag==1) cout<<"-1"<<endl;
    else
    {

        vector<int>row1;
        vector<int>col1;
        int cnt1=0;
        for(int i=1; i<=m; i++)
        {
            int mn=INFINITY;
            for(int j=1; j<=n; j++)
            {
                mn=min(mn,arr[j][i]);
            }
            for(int j=1; j<=n; j++)
            {
                out[j][i]=mn;
            }
            col1.push_back(mn);
            cnt1+=mn;
        }
        for(int i=1; i<=n; i++)
        {
            if(out[i][1]==arr[i][1])
            {
                row1.push_back(0);
            }
            else
            {
                int xx=arr[i][1]-out[i][1];
                for(int j=1; j<=m; j++)
                {
                    out[i][j]+=xx;
                }
                row1.push_back(xx);
                cnt1+=xx;
            }
        }
        int cnt=0;
        for(int i=0; i<row.size(); i++)
        {
            cnt+=row[i];
        }
        for(int i=0; i<col.size(); i++)
        {
            cnt+=col[i];
        }
        if(cnt<cnt1)
        {
            cout<<cnt<<endl;
            for(int i=0; i<row.size(); i++)
            {
                for(int j=0; j<row[i]; j++)
                {
                    cout<<"row "<<i+1<<endl;
                }
            }
            for(int i=0; i<col.size(); i++)
            {
                for(int j=0; j<col[i]; j++)
                {
                    cout<<"col "<<i+1<<endl;
                }
            }
        }
        else
        {
            cout<<cnt1<<endl;
            for(int i=0; i<row1.size(); i++)
            {
                for(int j=0; j<row1[i]; j++)
                {
                    cout<<"row "<<i+1<<endl;
                }
            }
            for(int i=0; i<col1.size(); i++)
            {
                for(int j=0; j<col1[i]; j++)
                {
                    cout<<"col "<<i+1<<endl;
                }
            }
        }
    }
}

