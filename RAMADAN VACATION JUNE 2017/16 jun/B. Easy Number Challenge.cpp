#include<bits/stdc++.h>
using namespace std;

int arr[1000000+1];
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n=a*b*c;
    for(int i=2;i<=n;i++)
    {
        int aa=i;
        int j=2;
        while(1)
        {
            if(aa>n) break;
            arr[aa]++;
            aa=(j*i);
            j++;
            //cout<<i<<" "<<aa<<" .....";
        }
        //cout<<i<<" "<<arr[i]<<endl;
    }
    long long ans=0;
    for(long long i=1;i<=a;i++)
    {
        for(long long j=1;j<=b;j++)
        {
            for(long long k=1;k<=c;k++)
            {
                long long xx=i*j*k;
                //cout<<xx<<" ";
                xx=arr[xx]+1;
                ans+=xx;
                ans=ans%1073741824;
                //cout<<xx<<endl;
            }
        }
    }
    cout<<ans<<endl;
}

