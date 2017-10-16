#include<bits/stdc++.h>
using namespace std;


int a[100000];
int main()
{
    int n,k;
    cin>>n>>k;
    int flag=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
    }
    int pos=1;
    for(int i=1;i<=n;i++)
    {
        pos+=a[pos];
        if(pos==k)
            flag=1;
        if(pos>=n)
            break;

    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
