#include<bits/stdc++.h>
using namespace std;

int arr[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt=-1;
    int turn=1;
    int info=0;
    while(1)
    {
        cnt++;
        if(turn==1)
        {
            turn=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<=info)
                {
                    arr[i]=INFINITY;
                    info++;
                }
            }
        }
        else
        {
            turn=1;
            for(int i=n-1;i>=0;i--)
            {
                if(arr[i]<=info)
                {
                    arr[i]=INFINITY;
                    info++;
                }
            }
        }
        if(info==n) break;

    }
    cout<<cnt<<endl;
}

