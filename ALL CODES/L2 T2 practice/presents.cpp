#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[101];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[a]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
