#include<bits/stdc++.h>
using namespace std;

long long arr[100000];
/*int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    long long x=arr[0];
    long long a=arr[n-1];
    long long aa;
    if(a-x==x) aa=x;
    else if(a-x==x+x) aa=x+x;
    else if(x+x==a) aa=a;
    else if(x==a) aa=a;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<aa)
        {
            arr[i]+=x;
            if(arr[i]!=aa)
            {
                flag=1;
                break;
            }
        }
        else if(arr[i]>aa)
        {
            arr[i]-=x;
            if(arr[i]!=aa)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}*/


int main()
{
    long int n,sum=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    sum=a[n-1]+a[0];
    if(sum%2==1)
        sum=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[0]&&a[i]!=a[n-1]&&a[i]!=sum/2)
        {
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
    return 0;
}

