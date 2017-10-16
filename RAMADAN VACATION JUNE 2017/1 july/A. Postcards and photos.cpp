#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int pf=0;
    double p=0,c=0;
    if(s[0]=='P')
    {
        p=1;
        pf=1;
    }
    else
    {
        c=1;
    }
    int cnt=0;
    for(int i=1; i<s.length(); i++)
    {
        if(pf==0)
        {
            if(s[i]=='C')
            {
                c++;
            }
            else
            {
                pf=1;
                cnt+=ceil(c/5.0);
                c=0;
                p++;
            }
        }
        else
        {
            if(s[i]=='P')
            {
                p++;

            }
            else
            {
                pf=0;
                cnt+=ceil(p/5.0);
                p=0;
                c++;
            }
        }
    }
    cnt+=ceil(p/5.0);
    cnt+=ceil(c/5.0);
    cout<<cnt<<endl;
}

