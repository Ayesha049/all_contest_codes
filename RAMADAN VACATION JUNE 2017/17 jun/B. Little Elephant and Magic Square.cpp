#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4];
    int sm[4];
    int sum=0;
    int mx=0;
    for(int i=1;i<=3;i++)
    {
        sum=0;
        for(int j=1;j<=3;j++)
        {
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        sm[i]=sum;
        mx=max(sum,mx);
    }
    mx++;
    arr[1][1]=mx-sm[1];
    arr[2][2]=mx-sm[2];
    arr[3][3]=mx-sm[3];
    int a=arr[1][1]+arr[2][2]+arr[3][3];
    a=mx-a;
    a/=2;
    arr[1][1]+=a;
    arr[2][2]+=a;
    arr[3][3]+=a;
    for(int i=1;i<=3;i++)
    {

        for(int j=1;j<=3;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }
}

