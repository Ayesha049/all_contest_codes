#include <bits/stdc++.h>
#define int long long int

using namespace std;

main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans*=i;
            while(n%i==0)
                n/=i;
        }
    }
    ans*=n;
    cout<<ans;
    return 0;
}
