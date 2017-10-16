#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    vector<pair<char,char> >vc;
    map<char,char>mp;
    int flag=0;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]!=s2[i])
        {
            if(mp[s1[i]]==0 && mp[s2[i]]==0)
            {
                mp[s1[i]]=s2[i];
                mp[s2[i]]=s1[i];
                vc.push_back(make_pair(s1[i],s2[i]));
            }
            else if(mp[s1[i]]!=s2[i])
            {
                flag=1;
                break;
            }
        }
        else
        {
            if(mp[s1[i]]==0)
            {
                mp[s1[i]]=s2[i];
            }
            else if(mp[s1[i]]!=s2[i])
            {
                flag=1;
                break;
            }
        }

    }
    if(flag==1) cout<<"-1"<<endl;
    else
    {
        cout<<vc.size()<<endl;
        for(int i=0;i<vc.size();i++) cout<<vc[i].first<<" "<<vc[i].second<<endl;
    }
}
