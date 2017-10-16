#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    char a,b,c,d;
    if(s1.length()!=s2.length())
        cout<<"NO"<<endl;
    else
    {
        int flag=0;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i] && flag==0)
            {
                flag++;
                a=s1[i];
                b=s2[i];
            }
            else if(s1[i]!=s2[i] && flag==1)
            {
                flag++;
                c=s1[i];
                d=s2[i];
            }
            else if(s1[i]!=s2[i] && flag==2)
            {
                flag++;
            }
        }
        if(flag==3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(a==d && b==c)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

}
