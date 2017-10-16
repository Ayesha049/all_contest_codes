#include<bits/stdc++.h>
using namespace std;

int ispalindrome(string str)
{
    int n=str.length();
    if(n==1)
        return 1;
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
            return 0;
    }

    return 1;

}

int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    map<string,int>mp;
    string s;
    cin>>s;
    vector<string>vt;
    int n=s.length();
    queue<string>q;
    for(int i=0; i<n; i++)
    {
        char ss[11];
        ss[0]=s[i];
        ss[1]='\0';
        string tt=ss;
        vt.push_back(tt);
        if(mp[tt]==0)
            mp[tt]=i;
        q.push(tt);
        while(1)
        {
            if(q.empty())
                break;
            string t=q.front();
            int a=mp[t];
            //cout<<a<<endl;
            for(int k=a+1; k<n; k++)
            {
                ss[0]=s[k];
                ss[1]='\0';
                string smth=ss;
                tt=t+smth;
                if(mp[tt]==0)
                {mp[tt]=k;}
                q.push(tt);
                vt.push_back(tt);
                //cout<<tt<<endl;
            }
            q.pop();
        }
    }
    sort(vt.begin(),vt.end());
    reverse(vt.begin(),vt.end());
    for(int i=0; i<vt.size(); i++)
    {
        if(ispalindrome(vt[i])==1)
        {
            cout<<vt[i]<<endl;
            break;
        }

    }

}
