#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>input;
    vector<string>name;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(input[s1]=="")
            name.push_back(s1);
        if(input[s2]=="")
            name.push_back(s2);
        input[s1]=s2;

    }
    vector<pair<string,string> >ans;
    for(int i=0;i<name.size();i++)
    {
        if(input[name[i]]!="")
        {
            string ss=name[i];
            string temp=input[ss];
            input[ss]="";
            while(input[temp]!="")
            {
                string tt=temp;
                temp=input[temp];
                input[tt]="";

            }
            ans.push_back(make_pair(ss,temp));
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

}
