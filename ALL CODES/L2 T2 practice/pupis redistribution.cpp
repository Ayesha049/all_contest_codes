#include<bits/stdc++.h>
using namespace std;


int arr[6];

int cnt[6];
int main()
{
    int n;
    cin>>n;
    int arr1[101];
    int arr2[101];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr[arr1[i]]++;
        cnt[arr1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
        arr[arr2[i]]++;
    }

    int flag=0;
    for(int i=1;i<=5;i++)
    {
        if(arr[i]%2!=0)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"-1"<<endl;
    }

    else
    {
        int cc=0;

        for(int i=1;i<=5;i++)
        {
            //cout<<arr[i]<<" ";
            //cout<<cnt[i]<<endl;;
            if(cnt[i]>(arr[i]/2))
                cc+=(cnt[i]-(arr[i]/2));
        }

        cout<<cc<<endl;
    }
}
