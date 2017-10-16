#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s1,s2,s3;
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==25)
        {
            s1.push(a);
        }
        else
        {
            if(a==50)
            {
                if(s1.empty())
                    flag=1;
                else
                {
                    s1.pop();
                    s2.push(a);
                }
            }
            else
            {
                if(s1.empty())
                    flag=1;
                else
                {
                    s1.pop();
                    {
                        if(s2.empty())
                        {
                            if(!s1.empty())
                                s1.pop();
                            if(s1.empty())
                                flag=1;
                            else
                                s1.pop();
                        }
                        else
                            s2.pop();
                    }
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}
