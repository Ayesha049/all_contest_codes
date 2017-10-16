#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;
    long long prev;
    int a;
    long long ans=1;
    for(long long i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            if(flag==0)
            {
                flag=1;
                prev=i;
            }
            else
            {
                ans*=(i-prev);
                prev=i;
            }
        }
    }
    if(flag==0) cout<<"0"<<endl;
    else cout<<ans<<endl;
}

