#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    cin>>n>>k;
    k=k-1;
    int ans=1,sum=1;
    while (sum<=n)
    {
        if (ans)
        {
            cout<<sum++<<" ";
        }
        else
        {
            cout<<n--<<" ";
        }
        if (k)
        {
            ans^=1;
            k--;
        }
    }
    return 0;
}
