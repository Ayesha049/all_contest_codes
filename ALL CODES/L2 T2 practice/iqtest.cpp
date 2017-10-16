#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[101];
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a%2;
        c+=arr[i];
    }
    int pos=0;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==1)
            {
                pos=i;
                break;
            }
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==0)
            {
                pos=i;
                break;
            }
        }
    }

    cout<<pos<<endl;
}
