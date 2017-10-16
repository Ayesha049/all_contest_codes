#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string s1;
    //char s1[1000];
    while(getline(cin,s1))
    {

        int count=1,pos=0;
        //int p=s1.find("\n");
        //cout<<p;
        string s2=s1;


        while(1)
        {
           pos= s2.find(" ");
           //cout<<pos<<endl;
           if(pos==-1)
            break;
           s2=s2.substr(pos+1);
           //cout<<s2<<endl<<count<<endl;
           for(int i=0;i<s2.length();i++)
           {
               if((s2[i]>=65 && s2[i]<91)|| (s2[i]>=97 && s2[i]<=122))
                {
                    count++;
                    break;
                }
               else
               {
                   break;
               }
           }

        }
        cout<<count<<endl;
    }

}
