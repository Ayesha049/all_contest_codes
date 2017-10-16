#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string ss[101];
    int arr[101];
    int arr1[101];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>ss[i];
    }
    sort(arr,arr+n);
    sort(ss,ss+m);
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        string str=ss[i];
        int c=1;
        while(ss[i+1]==str)
        {
            i++;
            c++;
        }
        arr1[cnt++]=c;
    }
    sort(arr1,arr1+cnt);
    int mn=0;
    int mx=0;
    for(int i=0;i<cnt;i++)
    {
        mn+=arr[cnt-1-i]*arr1[i];
        mx+=arr1[cnt-1-i]*arr[n-1-i];

        //cout<<arr1[i]<<" ";
    }
    cout<<mn<<" "<<mx<<endl;

}
