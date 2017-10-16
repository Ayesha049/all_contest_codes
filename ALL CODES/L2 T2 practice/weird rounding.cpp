#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin>>s>>k;
    int flag=0;
    int cnt=0;
    int dlt=0;
    for(int i=(s.length()-1);i>=0;i--)
    {
        if(s[i]=='0')
            cnt++;
        else
            dlt++;
        if(cnt==k)
        {
            flag=1;
            cout<<dlt<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<s.length()-1<<endl;
}
