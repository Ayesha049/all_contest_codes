#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=n;
    int xx=n;
    char arr[1001][1001];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            arr[i][j]='.';
    }
    for(int i=1; i<=n; i++)
    {
        arr[i][i]='C';
    }
    n-=2;
    int aa=2;
    while(n>0)
    {
        cnt+=(2*n);
        for(int i=1; i<=n; i++)
        {
            arr[i][aa+i]='C';
        }
        for(int i=1; i<=n; i++)
        {
            arr[aa+i][i]='C';
        }
        n-=2;
        aa+=2;
    }
    cout<<cnt<<endl;
    for(int i=1; i<=xx; i++)
    {
        for(int j=1; j<=xx; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

