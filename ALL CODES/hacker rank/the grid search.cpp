#include<bits/stdc++.h>
using namespace std;

int check(string *ss,string *ss1,int nn,int aa)
{
    vector<int>poss;
    int cnt=0;
    int flag=0;
    int pos=-1;
    int ini=-1;
    for(int i=0; i<nn; i++)
    {
        if(flag==0)
        {
            if(ss[i].find(ss1[cnt])!=-1)
            {

                while(ss[i].find(ss1[cnt])!=-1)
                {
                    pos=ss[i].find(ss1[cnt]);
                    ss[i][pos]='*';
                    poss.push_back(pos);

                    //cout<<endl<<"pos "<<i<<" "<<pos<<endl;

                }
                flag=1;

                cnt++;
                ini=i;

            }
        }
        else if(flag==1)
        {
            if(ss[i].find(ss1[cnt])==-1)
            {
                poss.clear();
                cnt=0;
                flag=0;
                pos=-1;
                ini=-1;
                i=i-1;
            }
            else
            {
                int ff=0;
                pos=ss[i].find(ss1[cnt]);
                //cout<<endl<<"pos "<<i<<" "<<pos<<endl;
                for(int ii=0;ii<poss.size();ii++)
                {
                    if(poss[ii]!=pos)
                    {
                        poss[ii]=-2;
                    }
                    if(poss[ii]==pos)
                    {
                        ff=1;
                        ss[i][pos]='*';
                        pos=ss[i].find(ss1[cnt]);
                        //cout<<endl<<"pos "<<i<<" "<<pos<<endl;
                    }
                }

                if(ff==0)
                {
                    poss.clear();
                    cnt=0;
                    flag=0;
                    pos=-1;
                    ini=-1;
                    i=i-1;
                }
                if(ff==1)
                {
                    cnt++;
                    if(cnt==aa)
                        break;
                }

            }

        }
    }
    if(cnt==aa)
        return 1;

    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        int a,b;
        cin>>a>>b;
        string s1[a];
        for(int i=0; i<a; i++)
        {
            cin>>s1[i];
        }
        if(check(s,s1,n,a)==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
