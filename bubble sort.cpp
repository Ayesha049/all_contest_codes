#include<bits/stdc++.h>
using namespace std;
int arr[5000][2];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
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
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }
}
