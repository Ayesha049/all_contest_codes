#include<bits/stdc++.h>
using namespace std;

long long mn(long long *arr,int n)
{
    long long m=10000000000;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]<m)
            m=arr[i];
    }
    return m;
}

long long mx(long long *arr,int n)
{
    long long m=0;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>m)
            m=arr[i];
    }
    return m;
}

int main()
{
    int n;
    long long arr[16];
    cin>>n;
    long long l,r,x;
    cin>>l>>r>>x;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int tr[16];
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        //cout<<endl<<endl;
        for(int j=1; j<=n; j++)
        {
            long long a[16];
            int xx=1;
            long long sum=0;
            for(int k=j; k<(i+j); k++)
            {
                if((i+j-1)>n)
                    break;
                a[xx++]=arr[k];
                sum+=arr[k];
                //cout<<arr[k]<<" ";
            }

            for(int k=i+j; k<=n; k++)
            {
                a[xx]=arr[k];
                sum+=arr[k];
                //cout<<arr[k]<<endl;

                if(sum>=l &&sum<=r)
                {
                    long long mnn=mn(a,xx);
                    long long mxx=mx(a,xx);
                    long long ayes=mxx-mnn;
                    if(ayes>=x)
                        {
                            cnt++;
                            //for(int mee=1;mee<=xx;mee++)
                                //cout<<a[mee]<<" ";
                        }
                        //cout<<endl;
                }
                sum-=arr[k];
            }
        }
    }
    cout<<cnt<<endl;

}
