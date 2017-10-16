#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("B-large.in","r",stdin);
    freopen("B-large.out","w",stdout);

    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        int n;
        cin>>n;
        double arr[2*n];
        for(int i=0; i<(2*n); i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(2*n));
        double mxarr[n];
        for(int i=0; i<n; i++)
        {
            mxarr[i]=arr[i]*arr[(2*n)-1-i];
            mxarr[i]=1-mxarr[i];
        }
        double ans=1.0;
        for(int i=0; i<n; i++)
        {
            ans*=mxarr[i];
        }

        cout<<"Case #"<<tt<<": ";
        printf("%.6lf\n",ans);
    }
}
