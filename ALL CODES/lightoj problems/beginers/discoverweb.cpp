#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin>>test;
    int ii=0;
    while(test--)
    {
        stack<string> st1;
        stack<string> st2;
        //st2.push("http://www.lightoj.com/");
        ii++;
        cout<<"Case "<<ii<<":"<<endl;
        string str1,str2;
        while(1)
        {
            cin>>str1;
            if(str1=="QUIT")
                break;
            if(str1=="VISIT")
            {
                cin>>str2;
                st2.push(str2);
                cout<<str2<<endl;
                while(!st1.empty())
                    st1.pop();
            }
            if(str1=="BACK")
            {
                if(st2.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    st1.push(st2.top());
                    st2.pop();
                    if(!st2.empty())
                    {
                        cout<<st2.top()<<endl;
                    }
                    else
                    {
                        cout<<"http://www.lightoj.com/"<<endl;
                    }
                }
            }
            if(str1=="FORWARD")
            {
                if(st1.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    cout<<st1.top()<<endl;
                    st2.push(st1.top());
                    st1.pop();
                }
            }
        }


    }
}
