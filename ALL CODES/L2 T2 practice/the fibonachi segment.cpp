#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mx=2;
    int cnt=2;
    if(n==1 || n==2)
        cout<<n<<endl;
    else
    {
        for(int i=0; i<n-2; i++)
        {
            if(arr[i]+arr[i+1]==arr[i+2])
                cnt++;
            else
                cnt=2;
            if(cnt>mx)
                mx=cnt;
        }
        cout<<mx<<endl;
    }
}
