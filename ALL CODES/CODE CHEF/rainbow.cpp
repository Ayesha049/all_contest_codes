#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1][n+1];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==j)
                    arr[i][j]=0;
                else
                    arr[i][j]=-1;
            }
        }
        for(int i=1; i<=n; i++)
        {
            int flag=0;
            int ind;
            int fst=-2;
            for(int j=1; j<=n; j++)
            {
                cin>>ind;
                if(i!=j && arr[i][j]!=0)
                    arr[i][j]=ind;
                if(arr[i][j]!=0)
                {
                    if(flag==0)
                    {
                        flag=1;
                        fst=arr[i][j];
                    }
                    else if(flag==1)
                    {
                        if(arr[i][j]!=fst)
                            flag=2;
                    }
                }
            }
            if(flag!=2)
            {
                for(int j=1; j<=n; j++)
                {
                    arr[j][i]=0;
                }
            }
        }
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            int flag=0;
            int fst=-2;
            for(int j=1; j<=n; j++)
            {
                if(arr[i][j]!=0)
                {
                    if(flag==0)
                    {
                        flag=1;
                        fst=arr[i][j];
                    }
                    else if(flag==1)
                    {
                        if(arr[i][j]!=fst)
                            flag=2;
                    }
                }
            }
            if(flag==2)
                cnt++;
        }
        if(cnt<3)
            cnt=0;
        cout<<cnt<<endl;


    }
}
