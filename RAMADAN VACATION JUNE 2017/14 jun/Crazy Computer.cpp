#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int ans=1;
    int b[n];

    for(int i=0;i<n;i++)
    {
        cin>>b[i];

    }
    for(int i=1;i<n;i++)
    {
        if(b[i]-b[i-1]>c)
            ans=1;
        else
            ans++;

    }
    cout<<ans<<endl;
}
