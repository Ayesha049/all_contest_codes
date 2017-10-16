#include<bits/stdc++.h>
using namespace std;

int arr[51][51];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(arr[i][j]!=1)
            {
                int f=0;
                for(int k=1; k<=n; k++)
                {
                    if(k!=j)
                    {
                        for(int l=1; l<=n; l++)
                        {
                            if(l!=i)
                            {
                                int aa=arr[i][k]+arr[l][j];
                                if(aa==arr[i][j])
                                {
                                    f=1;
                                    break;
                                }
                            }
                        }
                    }
                    if(f==1) break;
                }
                if(f==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) break;
    }
    if(flag==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

