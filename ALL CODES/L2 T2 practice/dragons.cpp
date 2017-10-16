#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int arr[1001][2];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(arr[j][0]>arr[j+1][0])
            {
                int temp=arr[j][0];
                arr[j][0]=arr[j+1][0];
                arr[j+1][0]=temp;

                temp=arr[j][1];
                arr[j][1]=arr[j+1][1];
                arr[j+1][1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s<=arr[i][0])
        {
            flag=1;
            break;
        }
        s+=arr[i][1];
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
