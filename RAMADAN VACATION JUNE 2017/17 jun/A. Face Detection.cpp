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
    if(n==1 || m==1) cout<<"0"<<endl;
    else
    {
        int cnt=0;
        int ans;
        map<char,int>mp;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(arr[i][j]=='f')
                {

                    if(i==1)
                    {
                        if(j==1)
                        {

                            mp[arr[i][j+1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                        else if(j==m)
                        {


                            mp[arr[i][j-1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                        else
                        {


                            mp[arr[i][j+1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();

                            mp[arr[i][j-1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                    }
                    else if(i==n)
                    {

                        if(j==1)
                        {

                            mp[arr[i][j+1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                        else if(j==m)
                        {

                            mp[arr[i][j-1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                        else
                        {
                            mp[arr[i][j+1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                            mp[arr[i][j-1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                    }
                    else
                    {
                        if(j==1)
                        {

                            mp[arr[i][j+1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                            mp[arr[i][j+1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                        else if(j==m)
                        {
                            mp[arr[i][j-1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                            mp[arr[i][j-1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                        else
                        {
                            mp[arr[i][j+1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                            mp[arr[i][j+1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j+1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                            mp[arr[i][j-1]]++;
                            mp[arr[i-1][j]]++;
                            mp[arr[i-1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                            mp[arr[i][j-1]]++;
                            mp[arr[i+1][j]]++;
                            mp[arr[i+1][j-1]]++;
                            if(mp['a']==1 && mp['c']==1 && mp['e']==1 ) cnt++;
                            mp.clear();
                        }
                    }
                }
            }

        }



        cout<<cnt<<endl;
    }
}



