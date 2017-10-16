#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(a=='0')
            zero++;
        else
            one++;
    }
    int ans=abs(zero-one);
    cout<<ans<<endl;

}
