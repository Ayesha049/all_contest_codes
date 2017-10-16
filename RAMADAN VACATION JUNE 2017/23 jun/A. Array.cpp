#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==0) v3.push_back(a);
        else if(a>0) v2.push_back(a);
        else v1.push_back(a);
    }
    int s1=v1.size();
    int s2=v2.size();
    if(s2==0)
    {
        v2.push_back(v1[s1-1]);
        s1--;
        s2++;
        v2.push_back(v1[s1-1]);
        s1--;
        s2++;
    }
    if(s1%2==0)
    {
        v3.push_back(v1[s1-1]);
        s1--;
    }
    cout<<s1<<" ";
    for(int i=0;i<s1;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl<<s2<<" ";
    for(int i=0;i<s2;i++)
    {
        cout<<v2[i]<<" ";
    }
    s2=v3.size();
    cout<<endl<<s2<<" ";
    for(int i=0;i<s2;i++)
    {
        cout<<v3[i]<<" ";
    }
}

