#include<bits/stdc++.h>
using namespace std;

int arr[1001];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1; i<=m; i++) cin>>arr[i];
    int p;
    cin>>p;
    int cnt=0;
    for(int i=1; i<=m; i++)
    {
        int xx=arr[i]^p;
        int m,s;
        s = 8*sizeof(xx);
        m = 0x80000000;
        int c=0;
        for(int i=0; i<s; i++)
        {
            if((m&xx)!=0)
            {
                c++;
            }
            xx = xx<<1;
        }
        if(c<=k) cnt++;
    }
    cout<<cnt<<endl;
}

