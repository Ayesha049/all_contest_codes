#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,ss;
    cin>>s1>>s2>>ss;
    int a1=s1.length();
    int a2=s2.length();
    int a=ss.length();
    if(a!=(a1+a2))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0; i<s1.length(); i++)
        {
            for(int j=0; j<ss.length(); j++)
            {
                if(s1[i]==ss[j])
                {
                    s1[i]='*';
                    ss[j]='#';
                    break;
                }
            }
        }
        for(int i=0; i<s2.length(); i++)
        {
            for(int j=0; j<ss.length(); j++)
            {
                if(s2[i]==ss[j])
                {
                    s2[i]='*';
                    ss[j]='#';
                    break;
                }
            }
        }
        int flag=0;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]!='*')
            {
                flag=1;
                break;
            }
        }
        for(int i=0; i<s2.length(); i++)
        {
            if(s2[i]!='*')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
