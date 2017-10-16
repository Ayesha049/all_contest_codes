#include<bits/stdc++.h>
using namespace std;

int dis[2001];
int n;

class graphh
{
public:
    int v;
    list<int>*arr;
    vector<int> parent;
    vector<int> visited;
    graphh(int x)
    {
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
        arr[a].push_back(b);

    }
    void bfs(int src)
    {

        for(int i=1;i<=n;i++) visited[i]=0;
        queue<int>q;
        visited[src]=1;
        q.push(src);
        parent[src]=-1;

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
                    dis[*i]=dis[u]+1;

                }
            }
        }

        return;

    }
};


int main()
{


    cin>>n;
    graphh g(n+1);
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a!=-1)
        {
            mp[i]=a;
            dis[i]=dis[a]+1;
            g.setedge(a,i);
            g.bfs(i);
            //cout<<endl;
        }
    }
    /*for(int i=1;i<=n;i++)
    {
        cout<<dis[i]<<" ";
    }*/

    sort(dis,dis+n+1);
    cout<<dis[n]+1<<endl;

}




/*
10
7
1
6
2
3
7
-1
5
5
6



*/
