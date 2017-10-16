#include<bits/stdc++.h>
using namespace std;

class graphh
{
public:
    int v;
    list<int>*arr;
    vector<int> parent;
    vector<int> visited;
    map<int,int>mp;
    map<int,int>mp1;
    int sz;
    graphh(int x)
    {
        sz=1;
        v=x;
        arr=new list<int>[v+1];
        for(int i=0;i<=x;i++)
        {
            parent.push_back(0);
            visited.push_back(0);
        }
    }
    void setedge(int a,int b)
    {

        if(mp[a]==0)
        {
            mp[a]=sz++;
            mp1[sz-1]=a;
        }
        if(mp[b]==0)
        {
            mp[b]=sz++;
            mp1[sz-1]=b;
        }
        arr[mp[a]].push_back(mp[b]);
        arr[mp[b]].push_back(mp[a]);
    }
    void strt()
    {
        for(int i=1;i<=v;i++)
        {
            if(arr[i].size()==1)
            {
                bfs(i);
                break;
            }
        }
    }
    void bfs(int src)
    {

        queue<int>q;
        visited[src]=1;
        q.push(src);
        parent[src]=-1;
        while(!q.empty())
        {
            //cout<<"inside loop"<<endl;
            int u;
            u=q.front();
            cout<<mp1[u]<<" ";
            q.pop();
            list<int>::iterator i;
            for (i = arr[u].begin(); i != arr[u].end(); ++i)
            {
                if(visited[*i]==0)
                {
                    visited[*i]=1;
                    q.push(*i);
                    parent[*i]=u;

                }
            }
        }
        return;

    }
};


int main()
{
    int n;
    cin>>n;

    graphh g(n+1);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;

        g.setedge(a,b);
    }
    //cout<<mp1[ss]<<endl;
    g.strt();

}
