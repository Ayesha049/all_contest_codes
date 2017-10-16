#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int xx=0;
    while(test--)
    {
        xx++;
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]!=i)
            {
                int temp=arr[arr[i]];
                arr[arr[i]]=arr[i];
                arr[i]=temp;
                cnt++;
            }
        }
        cout<<"Case "<<xx<<": "<<cnt<<endl;
    }
}
