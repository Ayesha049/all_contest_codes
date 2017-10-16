#include<bits/stdc++.h>
using namespace std;

int cnt=0;

class graphh
{
    int v;
    list<int>*arr;
public:
    int parent[100];
    int visited[100];
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

    void bfs(int src,int sink,int k)
    {
        int dis[50001];
        for(int i=1;i<=v;i++)
        {
            visited[i]=0;
            dis[i]=0;
        }


        queue<int>q;
        visited[src]=1;
        q.push(src);
        //cout<<src<<" ";;
        parent[src]=-1;
        dis[src] = 0;
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
                    if((*i)==sink)
                    {
                        if(dis[*i]==k)
                            cnt++;
                        return;
                    }
                    if(dis[*i]>k)
                        return;
                }
                //else if(arr[u][v] && color[u]==color[v] &&u!=v ) return;
            }
        }
        return;

    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    graphh g(n);
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        g.setedge(a,b);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            g.bfs(i,j,k);
        }
    }

    cout<<cnt<<endl;

}
