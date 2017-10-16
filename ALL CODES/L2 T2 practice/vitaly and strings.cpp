#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int flag=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        {
            if(s2[i]-s1[i]>1)
            {
                flag=1;
                s1[i]+=1;
                cout<<s1<<endl;
                break;
            }
            else
            {
                for(int j=i+1;j<s1.length();j++)
                {
                    if(s1[j]>='a' && s1[j]<'z')
                    {
                        s1[j]++;
                        flag=1;
                        cout<<s1<<endl;
                        break;
                    }
                }
                if(flag==0)
                {
                    for(int j=i+1;j<=s2.length();j++)
                    {
                        if(s2[j]>'a' && s2[j]<='z')
                        {
                            flag=1;
                            s2[j]--;
                            cout<<s2<<endl;
                            break;
                        }
                    }
                }
            }
            if(flag==1)
                break;
        }
    }
    if(flag==0)
    {
        cout<<"No such string"<<endl;
    }
}
