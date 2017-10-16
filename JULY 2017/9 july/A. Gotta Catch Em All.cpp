#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.length();i++) mp[s[i]]++;
    mp['a']/=2;
    mp['u']/=2;
    int cnt=INFINITY;
    string ss="Bulbasaur";
    for(int i=0;i<ss.length();i++) cnt=min(cnt,mp[ss[i]]);
    cout<<cnt<<endl;

}

