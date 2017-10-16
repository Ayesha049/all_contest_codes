#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>rat;
    vector<string>child;
    vector<string>women;
    vector<string>men;
    string captain;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s2=="rat")
            rat.push_back(s1);
        if(s2=="child")
            women.push_back(s1);
        if(s2=="woman")
            women.push_back(s1);
        if(s2=="man")
            men.push_back(s1);
        if(s2=="captain")
            captain=s1;
    }
    for(int i=0;i<rat.size();i++)
    {
        cout<<rat[i]<<endl;
    }
    for(int i=0;i<women.size();i++)
    {
        cout<<women[i]<<endl;
    }
    for(int i=0;i<men.size();i++)
    {
        cout<<men[i]<<endl;
    }
    cout<<captain<<endl;



}
