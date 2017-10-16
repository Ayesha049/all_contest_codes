#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2)
        cout<<"-1"<<endl;
    else
    {
        int ans=max(s1.length(),s2.length());
        cout<<ans<<endl;
    }
}
