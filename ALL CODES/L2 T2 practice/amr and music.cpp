#include<bits/stdc++.h>
using namespace std;

int arr1[101];
int arr2[101];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }
    sort(arr1,arr1+n);
    int cnt =0;
    int sum=0;
    while(sum<k)
    {
        sum+=arr1[cnt++];
        if(cnt==n)
        {
            break;
        }
    }
    if(sum>k)
        cnt--;
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<j+1<<" ";
                arr2[j]=-1;
                break;
            }
        }
    }


}
