#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[3][10];
    strcpy(arr[0],"qwertyuiop");
    strcpy(arr[1],"asdfghjkl;");
    strcpy(arr[2],"zxcvbnm,./");
    string ss="qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    if(ch=='R')
    {
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<30;j++)
            {
                if(s[i]==ss[j])
                {
                    s[i]=ss[j-1];
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<30;j++)
            {
                if(s[i]==ss[j])
                {
                    s[i]=ss[j+1];
                    break;
                }
            }
        }
        cout<<s<<endl;
    }


}
