#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    string s;
    cin>>s;
    l=s.length();
    int cnt=l;
    stack<char>st;

    for(int i=0; i<l; i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
        }
        if(s[i]==')')
        {
            if(st.empty())
            {
                cnt--;
            }
            else

            {
                st.pop();
            }
        }
    }

    while(!st.empty())
    {
        st.pop();
        cnt--;
    }
    cout<<cnt<<endl;

}
