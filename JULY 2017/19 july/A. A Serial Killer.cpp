#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string ss1,ss2;
        cin>>ss1>>ss2;
        if(ss1==s1)
        {
            s1=ss2;
        }
        else s2=ss2;
        cout<<s1<<" "<<s2<<endl;
    }
}

