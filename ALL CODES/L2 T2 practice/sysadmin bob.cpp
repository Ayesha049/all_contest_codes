#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[0]=='@')
        cout<<"No solution"<<endl;
    else
    {
        int lasti;
        int cnt=0;
        string ans[100];
        int flag=0;
        int j=0;
        char arr[201];
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!='@' && s[i]!='*')
            {
                arr[j++]=s[i];
            }
            if(s[i]=='@')
            {
                if(s[i-1]!='*' && i!=(s.length()-1))
                {
                    if(s[i+1]>=97 && s[i+1]<=122)
                    {
                        arr[j++]=s[i];
                        arr[j++]=s[i+1];
                        s[i+1]='*';
                        arr[j]='\0';
                        ans[cnt++]=arr;
                        lasti=i+2;
                        //cout<<"hchskdz"<<arr<<endl;
                        j=0;
                    }
                    else
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
        if(flag==1)
            cout<<"No solution"<<endl;
        else
        {
            int xxx=ans[cnt-1].length();
            ans[cnt-1][xxx]='\0';
            for(int i=0; i<cnt-1; i++)
            {
                cout<<ans[i]<<",";
            }
            for(int i=0;i<xxx;i++)
            {
                cout<<ans[cnt-1][i];
            }
            for(int i=lasti;i<s.length();i++)
                cout<<s[i];
            cout<<endl;
        }
    }
}
