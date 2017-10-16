#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=1;
    char flag=s[0];
    for(int i=0;i<n;i++)
    {
        if(s[i]!=flag)
        {
            flag=s[i];
            cnt++;
        }
    }
    int ans=min((cnt+2),n);
    cout<<ans<<endl;
}
