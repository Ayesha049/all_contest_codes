#include<bits/stdc++.h>
using namespace std;

int arr[1001];
int main()
{
    int n;
    cin>>n;
    int in=0;
    int f=n-1;
    int s=0,d=0;
    int flag=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while(in<=f)
    {
        if(flag==0)
        {
            flag=1;
            int a=max(arr[in],arr[f]);
            s+=a;
            if(a==arr[in]) in++;
            else f--;
        }
        else
        {
            flag=0;
            int a=max(arr[in],arr[f]);
            d+=a;
            if(a==arr[in]) in++;
            else f--;
        }
    }
    cout<<s<<" "<<d<<endl;
}

