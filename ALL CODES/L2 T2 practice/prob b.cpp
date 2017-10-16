#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    char arr[200];
    int n=s1.length();
    if(s1.length()!=s2.length())
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]==s2[i])
            {
                arr[i]=s2[i];
            }
            else
            {
                if(s1[i]<s2[i])
                {
                    flag=1;
                    //arr[i]='*';
                    break;
                }
                else
                {
                    arr[i]=s2[i];
                }
            }
        }
        arr[n]='\0';
        //cout<<arr<<endl;
        if(flag==1)
        {
            cout<<"-1"<<endl;
        }
        else
            cout<<arr<<endl;
    }

}
