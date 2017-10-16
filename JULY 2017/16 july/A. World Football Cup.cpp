#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>name;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        name.push_back(s);
    }
    vector<pair<int,pair<int,pair<int,string> > > > pp;
    int m=(n*(n-1))/2;
    map<string,int>goal;
    map<string,int>points;
    map<string,int>miss;
    for(int i=0;i<m;i++)
    {
        string s;
        cin>>s;
        int a,b;
        char ch;
        cin>>a>>ch>>b;
        string s1,s2;
        int j;
        for(j=0;;j++)
        {
            if(s[j]=='-') break;
            s1+=s[j];
        }
        for(int k=j+1;k<s.length();k++) s2+=s[k];
        goal[s1]+=a;
        goal[s2]+=b;
        miss[s1]+=b;
        miss[s2]+=a;
        if(a>b) points[s1]+=3;
        else if(b>a) points[s2]+=3;
        else
        {
            points[s1]++;
            points[s2]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        pp.push_back(make_pair(points[name[i]],(make_pair((goal[name[i]]-miss[name[i]]),make_pair(goal[name[i]],name[i])))));
    }
    sort(pp.begin(),pp.end());
    reverse(pp.begin(),pp.end());
    vector<string>ans;
    for(int i=0;i<n/2;i++)
    {
        ans.push_back(pp[i].second.second.second);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n/2;i++) cout<<ans[i]<<endl;
}

