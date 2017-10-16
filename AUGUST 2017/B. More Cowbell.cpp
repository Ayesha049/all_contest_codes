#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a;
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        vc.push_back(a);
    }
    int x;
    x=(2*k)-n;
    int y=2*n-2*k;
    int mx=vc[n-1];
    for(int i=0;i<y/2;i++)
    {
        int xx=vc[i]+vc[y-i-1];
        mx=max(mx,xx);
    }
    cout<<mx<<endl;
}

