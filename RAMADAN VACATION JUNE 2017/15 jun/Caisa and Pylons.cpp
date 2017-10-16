#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    int ans=a;
    int diff=0;
    for(int i=1; i<n; i++)
    {
        int b;
        cin>>b;
        diff+=(a-b);
        a=b;
        if(diff<0)
        {
            ans=ans-(diff);
            diff=0;
        }
    }

    cout<<ans<<endl;
}

