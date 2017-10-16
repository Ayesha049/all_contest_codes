#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int ff=0;
    map<char,int>mp;
    vector<char>vt;
    for(int i=0;i<s.length();i++)
    {
        char a;
        a=s[i];
        if(mp[a]==0)
        {
            vt.push_back(a);
        }
        mp[a]++;
    }
    for(int i=0;i<vt.size();i++)
    {
        if(mp[vt[i]]%n!=0)
        {
            ff=1;
            break;
        }
    }
    if(ff==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        char arr[1001];
        int sz=0;
        for(int i=0;i<vt.size();i++)
        {
            int aa=mp[vt[i]]/n;
            for(int j=0;j<aa;j++)
            {
                arr[sz++]=vt[i];
            }
        }
        arr[sz]='\0';
        for(int i=0;i<n;i++)
        {
            cout<<arr;
        }
        cout<<endl;

    }
}
