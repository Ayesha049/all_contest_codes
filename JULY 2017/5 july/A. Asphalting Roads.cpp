#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='4' || s[i]=='7') c++;
        }
        if(c<=k) cnt++;
    }
    cout<<cnt<<endl;
}

