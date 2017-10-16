#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k1,k2;
    queue<int>one;
    queue<int>two;
    cin>>k1;
    for(int i=1; i<=k1; i++)
    {
        int a;
        cin>>a;
        one.push(a);
    }
    cin>>k2;

    for(int i=1; i<=k2; i++)
    {
        int a;
        cin>>a;
        two.push(a);
    }
    map<pair<int,int>,int>mp;
    int flag=0;
    for(int i=1;; i++)
    {
        int xx=one.size();
        int fst=0;
        for(int j=1; j<=xx; j++)
        {
            int t=one.front();
            one.pop();
            one.push(t);
            fst=fst*10;
            fst+=t;
        }

        xx=two.size();
        int snd=0;
        for(int j=1; j<=xx; j++)
        {
            int t=two.front();
            two.pop();
            two.push(t);
            snd=snd*10;
            snd+=t;
        }

        if(mp[make_pair(fst,snd)]==0)
        {
            mp[make_pair(fst,snd)]=1;
        }

        else
        {
            break;
        }


        int a=one.front();
        one.pop();
        int b=two.front();
        two.pop();
        if(a>b)
        {
            one.push(b);
            one.push(a);
        }
        else
        {
            two.push(a);
            two.push(b);
        }
        if(one.empty())
        {
            flag=1;
            cout<<i<<" "<<"2"<<endl;
            break;
        }
        if(two.empty())
        {
            flag=1;
            cout<<i<<" "<<"1"<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"-1"<<endl;

}

