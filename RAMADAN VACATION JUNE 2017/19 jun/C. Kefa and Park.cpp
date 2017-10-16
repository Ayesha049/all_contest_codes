#include<bits/stdc++.h>
using namespace std;


int obs[100000+1];
class graphh
{
public:
    int v;
    list<int>*arr;
    vector<int> parent;
    vector<int> visited;
    vector<int> vs;
    vector<int> dis;
    vector<int>dd;
    graphh(int x)
    {
        v=x;
        arr=new list<int>[v+1];
        for(int i=0;i<=x;i++)
        {
            parent.push_back(0);
            visited.push_back(0);
            dis.push_back(0);
            vs.push_back(0);
            dd.push_back(0);
        }
    }
    void setedge(int a,int b)
    {
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    void bfs(int src)
    {

        queue<int>q;
        visited[src]=1;
        q.push(src);
        parent[src]=-1;
        dis[src]=obs[src];
        while(!q.empty())
        {
            //cout<<"inside loop"<<endl;
            int u;
            u=q.front();
            //cout<<u<<" ";
            q.pop();
            list<int>::iterator i;
            for (i = arr[u].begin(); i != arr[u].end(); ++i)
            {
                if(visited[*i]==0)
                {
                    visited[*i]=1;
                    q.push(*i);
                    parent[*i]=u;
                    if(obs[*i]==0) dis[*i]=0;
                    else dis[*i]=obs[*i]+dis[u];

                }
            }
        }
        return;

    }



    void DFSconnected(int a)
    {
        //colour[a]=-1;
        vs[a]=1;
        //time=time+1;
        //dtime[a]=time;
        int mx=dd[a];
        //dd[a]=mx;
        if(parent[a]!=-1)
        {
            mx=max(dis[a],dd[parent[a]]);
            dd[a]=mx;
            //cout<<a<<" "<<mx<<"   uhdiufnd   \n";
        }
        //cout<<a<<" ";
        list<int>::iterator i;
        for (i = arr[a].begin(); i != arr[a].end(); ++i)
        {

            if(vs[*i]==0)
            {
                DFSconnected(*i);
                mx=max(dis[*i],dd[parent[*i]]);
                dd[*i]=mx;
                //cout<<*i<<" "<<dd[*i]<<endl;
            }
        }

        //time=time+1;
        //ftime[a]=time;
    }

    void dfs(int src)
    {
        dd[src]=dis[src];
        //time=0;
        DFSconnected(src);
        for(int i=1; i<v; i++)
        {
            if(visited[i]==0)
            {
                DFSconnected(i);
            }

        }
    }

};

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>obs[i];
    graphh g(n+1);
    map<int,int>mp;
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        g.setedge(a,b);
        mp[a]++;
        mp[b]++;
    }
    g.bfs(1);
    g.dfs(1);
    int cnt=0;
    //cout<<endl;
    for(int i=2;i<=n;i++)
    {
        if(mp[i]==1)
        {
            int a=g.dd[i];
            if(a<=k) cnt++;
        }
        //cout<<g.dd[i]<<" ";
    }
    cout<<cnt<<endl;

}

