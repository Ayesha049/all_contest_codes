#include<bits/stdc++.h>
using namespace std;


int arr[101];
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int vc[10];
        for(int j=0;j<=k;j++)
        {
            vc[j]=0;
        }
        int a=arr[i];
        int flag=0;
        while(a>0)
        {
            vc[a%10]=1;
            a=a/10;
        }
        for(int j=0;j<=k;j++)
        {
            if(vc[j]!=1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) cnt++;
    }
    cout<<cnt<<endl;
}
