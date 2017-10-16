#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int input[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>input[i];

    }
    int output[n+1];
    int pos=1;
    for(int i=1;i<=n;i++)
    {
        int mx=0;
        for(int j=1;j<=n;j++)
        {
            mx=max(mx,input[j]);
        }
        int cnt=0;
        for(int j=1;j<=n;j++)
        {
            if(input[j]==mx)
            {
                cnt++;
                input[j]=-1;
                output[j]=pos;
            }
        }
        pos+=cnt;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<output[i]<<" ";
    }


}
