#include<bits/stdc++.h>
using namespace std;


int dif[200000];
int main()
{
    int n,k;
    cin>>n>>k;
    int arr1[n];
    int arr2[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    long long mncost=0;

    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
        mncost+=arr2[i];
    }


    int cnt=0;

    for(int i=0;i<n;i++)
    {
        dif[i]=(arr1[i]-arr2[i]);
        if(dif[i]<0)
            cnt++;
    }

    sort(dif,dif+n);
    if(cnt>k)
        k=cnt;
    for(int i=0;i<k;i++)
    {
        mncost+=dif[i];
    }


    cout<<mncost<<endl;
}
