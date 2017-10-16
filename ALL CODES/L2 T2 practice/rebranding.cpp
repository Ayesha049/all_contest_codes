#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int chars[26];
    char s[200001];
    int l,designers;
    cin>>l>>designers;
    for(int i=0;i<l;i++)
    {
        cin>>s[i];
        int temp=(int)s[i];
        chars[temp-97]=10;
    }
    s[l]='\0';

    for(int i=0;i<designers;i++)
    {

        char ch1,ch2;
        cin>>ch1>>ch2;
        int t1,t2;
        t1=(int)ch1;
        t2=(int)ch2;
        //cout<<t1<<t2<<endl;
        if(chars[t1-97]!=10 && chars[t2-97]!=10)
        {
            //cout<<"adjhbsdfjnffv"<<endl;
            continue;

        }
        else
        {

            for(int j=0;j<l;j++)
            {
                if(s[j]==ch1)
                {
                    s[j]=ch2;
                    chars[t2-97]=10;

                }
                else if(s[j]==ch2)
                {
                    s[j]=ch1;
                    chars[t1-97]=10;
                }
            }
        }
    }




    cout<<s;



    /*for(int i=0;i<26;i++)
    {
        cout<<"["<<chars[i]<<"] ";
    }*/



}
