#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a1,a2;
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==1) a1=i;
        else if(a==n) a2=i;
    }
    a=max(a1,a2);
    a1=min(a1,a2);
    int ans=(a-a1);
    a=(n-a);
    a1--;
    a1=max(a1,a);
    ans+=a1;
    cout<<ans<<endl;
}

