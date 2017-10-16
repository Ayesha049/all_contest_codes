#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    int k,m;
    cin>>k>>m;

    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    reverse(arr2,arr2+n2);
    if(arr1[k-1]<arr2[m-1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
