#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t=s;
    vector<int>pos;
    while(1)
    {
        int a=t.find("@");
        if(a==-1) break;
        t[a]='*';
        pos.push_back(a);
    }
    sort(pos.begin(),pos.end());
    int flag=0;
    int xx=pos.size();
    if(xx==0 || pos[0]==0 || pos[xx-1]==(s.length()-1)) flag=1;
    for(int i=1;i<xx;i++)
    {
        if(pos[i]-pos[i-1]<=2) flag=1;
    }
    if(flag==1) cout<<"No solution"<<endl;
    else
    {
        int pp=0;
        for(int i=0;i<xx;i++)
        {
            int jj=pos[i]+1;
            for(int j=pp;j<=jj;j++)
            {
                cout<<s[j];
            }
            if(i!=xx-1)
                cout<<",";
            pp=jj+1;
        }
        for(int i=pp;i<s.length();i++) cout<<s[i];
        cout<<endl;
    }
}

