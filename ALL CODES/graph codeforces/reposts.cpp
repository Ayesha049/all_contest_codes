#include<bits/stdc++.h>
using namespace std;

class graphh
{
    int v;
    list<int>*arr;
public:
    int parent[201];
    int visited[201];
    int dis[201];

    graphh(int v)
    {
        this->v=v;
        arr=new list<int>[v+1];
        for(int i=1; i<=v; i++)
        {
            parent[i]=0;
            visited[i]=0;
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
        //cout<<src<<" ";;
        parent[src]=-1;
        dis[src] = 1;
        while(!q.empty())
        {
            int u;
            u=q.front();
            //cout<<u<<" ";
            q.pop();

            list<int>::iterator i;
            for (i = arr[u].begin(); i != arr[u].end(); ++i)
            {
                //if(arr[u][v] && color[v]==-1 && u!=v)
                if(visited[*i]==0)
                {
                    visited[*i]=1;
                    q.push(*i);
                    parent[*i]=u;
                    dis[*i] = 1+dis[u];
                }
                //else if(arr[u][v] && color[u]==color[v] &&u!=v ) return;
            }
        }
        return;

    }
};
int main()
{
    graphh g(201);
    int n;
    cin>>n;
    string name[201];
    map<string,int> mp;
    int xx=1;
    for(int i=1;i<=n;i++)
    {
        string s1,ss,s2;
        cin>>s1>>ss>>s2;
        for(int j=0;j<s1.length();j++)
        {
            if(s1[j]>='A' && s1[j]<='Z')
            {
                s1[j]+=32;
            }
        }
        for(int j=0;j<s2.length();j++)
        {
            if(s2[j]>='A' && s2[j]<='Z')
            {
                s2[j]+=32;
            }
        }
        if(mp[s1]==0)
        {
            name[xx++]=s1;
            mp[s1]=xx-1;

        }
        if(mp[s2]==0)
        {
            name[xx++]=s2;
            mp[s2]=xx-1;
        }
        g.setedge(mp[s1],mp[s2]);


    }

    string str= "polycarp";

    g.bfs(mp[str]);

    int mx=0;
    for(int i=1;i<xx;i++)
    {
        if(g.dis[i]>mx)
            mx=g.dis[i];
    }

    cout<<mx<<endl;



}
