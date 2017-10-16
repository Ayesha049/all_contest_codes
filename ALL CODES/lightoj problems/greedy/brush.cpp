#include<bits/stdc++.h>
using namespace std;

long long arr[50000];

int main()
{
    int n,w;
    int t;
    cin>>t;
    int xx=0;
    while(t--)
    {
        xx++;
        cin>>n>>w;
        for(int i=0; i<n; i++)
        {
            int aa;
            cin>>aa>>arr[i];
        }
        sort(arr,arr+n);
        int mve=0;
        for(int i=0; i<n;)
        {
            mve++;
            long long a=arr[i]+w;
            while(arr[i]<=a)
            {
                i++;
                if(i==(n))
                    break;
            }

        }
        cout<<"Case "<<xx<<": "<<mve<<endl;
    }
}
