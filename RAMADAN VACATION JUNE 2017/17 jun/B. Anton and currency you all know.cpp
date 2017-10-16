#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.find("2")==-1 && s.find("4")==-1 && s.find("6")==-1 && s.find("8")==-1 && s.find("0")==-1 )
        cout<<"-1"<<endl;
    else
    {
        int flag=0;
        int pos;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8')
            {
                pos=i;
                if(s[i]<s[s.length()-1])
                {
                    string sss=s;
                    sss[i]=s[s.length()-1];
                    sss[s.length()-1]=s[i];
                    s=sss;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<s<<endl;
        else
        {
            string sss=s;
            sss[pos]=s[s.length()-1];
            sss[s.length()-1]=s[pos];
            s=sss;
            cout<<s<<endl;
        }
    }
}

