#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    map<string,int>mp;

    for(int i=0; i<10; i++)
    {
        string sss;
        cin>>sss;
        mp[sss]=i;
    }
    for(int i=0; i<s.length();)
    {
        char arr[11];
        for(int j=0; j<10; j++)
        {
            arr[j]=s[i++];
        }
        arr[10]='\0';
        string ss=arr;
        cout<<mp[ss];
    }
}
