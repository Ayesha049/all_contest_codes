#include<bits/stdc++.h>
using namespace std;

int arr[100000];
char ss[100000];
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=-1)
        {
            flag=0;
            long long aa=arr[i];
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]!=-1)
                {
                    long long bb=aa+arr[j];
                    if(bb==a)
                    {
                        arr[i]=-1;
                        arr[j]=-1;
                        ss[i]='0';
                        ss[j]='0';
                        flag=1;

                    }
                    else if(bb==b)
                    {
                        arr[i]=-1;
                        arr[j]=-1;
                        ss[i]='1';
                        ss[j]='1';
                        flag=1;
                    }
                }

            }
            if(flag==0)
                break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<ss[i]<<" ";
        }
    }

}
