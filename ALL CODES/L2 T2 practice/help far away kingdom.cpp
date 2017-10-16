#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=s.find(".");
    //cout<<a<<endl;
    if(a==-1)
    {
        if(s[s.length()-1]=='9')
            cout<<"GOTO Vasilisa."<<endl;
        else
            cout<<s<<endl;
    }
    else
    {
        if(s[a-1]=='9')
        {
            cout<<"GOTO Vasilisa."<<endl;
        }
        else
        {
            if(s[a+1]>='0' && s[a+1]<'5')
            {
                for(int i=0; i<a; i++)
                {
                    cout<<s[i];
                }
            }
            else
            {
                for(int i=0; i<a-1; i++)
                {
                    cout<<s[i];
                }
                cout<<++s[a-1];
            }

        }


    }
}
