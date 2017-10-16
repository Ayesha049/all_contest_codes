#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char>w;
    map<char,int>mp;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(mp[s[i]]==0) w.push_back(s[i]);
        mp[s[i]]++;
    }
    int cnt=0;
    for(int i=0;i<w.size();i++)
    {
        cnt+=(mp[w[i]]%2);
    }
    if(cnt==0 || cnt==1) cout<<"First"<<endl;
    else
    {
       if(cnt%2==0) cout<<"Second"<<endl;
       else  cout<<"First"<<endl;
    }
}

