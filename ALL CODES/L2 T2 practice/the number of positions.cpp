#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if((b+1)<=(n-a))
        cout<<b+1<<endl;
    else
    {
        int ans=n-a;
        if(ans<=0)
            cout<<"0"<<endl;
        else
            cout<<ans<<endl;
    }
}
