#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[k];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<k; i++)
    {
        cin>>b[i];
    }
    if(k>1)
        cout<<"Yes"<<endl;
    else
    {
        int flag=0;
        if(a[0]==0) a[0]=b[0];

        for(int i=1; i<n; i++)
        {
            if(a[i]!=0)
            {
                if(a[i-1]>a[i])
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                a[i]=b[0];
                if(a[i-1]>a[i])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

