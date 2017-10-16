#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[12];
    int k;
    cin>>k;
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12);
    int cnt=0;
    int gr=0;
    for(int i=11;i>=0;i--)
    {
        if(gr>=k)
        {
            break;
        }
        else
        {
            gr+=arr[i];
            cnt++;
        }
    }
    if(gr<k)
        cout<<"-1"<<endl;
    else
        cout<<cnt<<endl;
}
