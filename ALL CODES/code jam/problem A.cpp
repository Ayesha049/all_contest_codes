#include<bits/stdc++.h>
using namespace std;

int arr[101][101];
int main()
{
    freopen("A-large.in","r",stdin);
    freopen("A-large.out","w",stdout);

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int f,s;
        cin>>f>>s;
        for(int j=1;j<=s;j++)
        {
            for(int k=1;k<=s;k++)
                arr[j][k]=0;
        }
        for(int j=1;j<=f;j++)
        {
            int a,b;
            cin>>a>>b;
            arr[a][b]=1;
            arr[b][a]=1;
        }
        int mx=0;
        int cnt;
        for(int j=1;j<=s;j++)
        {
            cnt=0;
            for(int k=1;k<=s;k++)
            {
                cnt+=arr[j][k];
            }
            if(cnt>mx)
                mx=cnt;
        }
        cout<<"Case #"<<i<<": "<<mx<<endl;
    }
}
