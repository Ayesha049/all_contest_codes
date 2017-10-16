#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int j;
        if(s[i]=='B')
        {
            for(j=i;j<s.length();j++)
            {
                if(s[j]!='B')
                    break;
            }
            ans.push_back(j-i);
            i=j;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
