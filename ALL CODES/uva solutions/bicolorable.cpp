#include<bits/stdc++.h>
using namespace std;

class graphh
{
public:
    int v;
    vector<int>arr[201];
    int parent[201];
    int visited[201];
    int color[201];
    graphh(int x)
    {
        v=x;
        for(int i=0;i<=x;i++)
        {
            parent[i]=0;
            visited[i]=0;
            color[i]=0;
        }
    }
    void setedge(int a,int b)
    {
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int bfs(int src)
    {

        queue<int>q;
        visited[src]=1;
        color[src]=10;
        q.push(src);
        parent[src]=-1;
        while(!q.empty())
        {
            //cout<<"inside loop"<<endl;
            int u;
            u=q.front();
            //cout<<u<<" ";
            q.pop();
            vector<int>::iterator i;
            for (i = arr[u].begin(); i != arr[u].end(); ++i)
            {
                //cout<<*i<<" ";
                if(visited[*i]==0)
                {
                    //cout<<"visited "<<*i<<" ";
                    if(color[u]==10)
                        color[*i]=20;
                    else if(color[u]==20)
                        color[*i]=10;
                    visited[*i]=1;
                    q.push(*i);
                    parent[*i]=u;

                }
                else if(color[u]==color[*i])
                    return 0;
            }
            //cout<<endl;
        }
        return 1;

    }
};

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int l;
        cin>>l;
        graphh g(n);
        int ss;
        for(int i=1;i<=l;i++)
        {
            int a,b;
            ss=a;
            cin>>a>>b;
            g.setedge(a,b);
        }
        int ans=g.bfs(ss);
        if(ans==0)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;


    }
}

