#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0;
    int n=s.length();
    int len=n/2;
    for(int i=0; i<len; i++)
    {
        if(flag==0)
        {
            if(s[i]!=s[n-i-1])
            {
                //cout<<s[i]<<endl;
                flag=1;
            }
        }
        else if(flag==1)
        {
            if(s[i]!=s[n-i-1])
            {
                //cout<<s[i]<<endl;
                flag=2;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
    {
        if(flag==0)
        {
            if(n%2==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
