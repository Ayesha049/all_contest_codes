#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(n==1)
        cout<<n<<endl;
    else
    {
        sort(arr,arr+n);
        int cnt=0;
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            if(l==r)
            {
                cnt++;
                l++;
                r--;
            }
            else if(arr[l]+arr[r]==4)
            {
                cnt++;
                l++;
                r--;
            }
            else if(arr[l]+arr[r]>4)
            {
                cnt++;
                r--;
            }
            else
            {
                arr[r]=arr[r]+arr[l];
                l++;
            }
        }
        //if(arr[r]<4) cnt++;
        cout<<cnt<<endl;
    }

}
