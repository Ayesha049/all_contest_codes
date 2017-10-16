#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mm[100];
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mm[i]=arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<=n/2;i++)
    {
        //cout<<arr[i-1]<<" "<<arr[n-i]<<" ";
        int a,b;
        for(int j=0;j<n;j++)
        {
            if(mm[j]==arr[i-1])
            {
                a=j+1;
                mm[j]=-10;
                break;
            }

        }
        for(int j=0;j<n;j++)
        {
            if(mm[j]==arr[n-i])
            {
                b=j+1;
                mm[j]=-10;
                break;
            }
        }

        cout<<a<<" "<<b<<endl;
    }
}
