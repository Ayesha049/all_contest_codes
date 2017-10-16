#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>mp;
    for(int i=0; i<s1.length(); i++) mp[s1[i]]=1;
    int n;
    cin>>n;
    string s;
    int a=s2.find("*");
    int l=s2.length();
    if(s2=="*")
    {
        while(n--)
        {
            cin>>s;
            int flag=0;
            for(int i=0;i<s.length();i++)
            {
                if(mp[s[i]]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    else
    {
        while(n--)
        {
            cin>>s;
            int flag=0;
            if(a==-1)
            {
                if(s.length()!=l) flag=1;
                else
                {
                    for(int i=0; i<l; i++)
                    {
                        if(s[i]!=s2[i])
                        {
                            if(s2[i]=='?')
                            {
                                if(mp[s[i]]!=1)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            else
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
            else if(a==(l-1))
            {
                if(s.length()<(l-1)) flag=1;
                else
                {
                    for(int i=0; i<l-1; i++)
                    {
                        if(s[i]!=s2[i])
                        {
                            if(s2[i]=='?')
                            {
                                if(mp[s[i]]!=1)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            else
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag==0)
                    {
                        for(int i=l-1; i<(s.length()); i++)
                        {
                            if(mp[s[i]]==1)
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
            else if(a==0)
            {
                if(s.length()<(l-1)) flag=1;
                else
                {
                    int l1=s.length();
                    for(int i=1; i<l; i++)
                    {
                        if(s[l1-i]!=s2[l-i])
                        {
                            if(s2[l-i]=='?')
                            {
                                if(mp[s[l1-i]]!=1)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            else
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag==0)
                    {
                        for(int i=(l1-l); i>=0; i--)
                        {
                            if(mp[s[i]]==1)
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
            else
            {
                if(s.length()<(l-1)) flag=1;
                else
                {
                    for(int i=0; i<=a-1; i++)
                    {
                        if(s[i]!=s2[i])
                        {
                            if(s2[i]=='?')
                            {
                                if(mp[s[i]]!=1)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            else
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag==0)
                    {
                        int l1=s.length();
                        for(int i=1; i<(l-a); i++)
                        {
                            if(s[l1-i]!=s2[l-i])
                            {
                                if(s2[l-i]=='?')
                                {
                                    if(mp[s[l1-i]]!=1)
                                    {
                                        flag=1;
                                        break;
                                    }
                                }
                                else
                                {
                                    flag=1;
                                    break;
                                }
                            }
                        }
                        if(flag==0)
                        {
                            for(int i=a; i<=(l1-(l-a)); i++)
                            {
                                if(mp[s[i]]==1)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            if(flag==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}

