#include<bits/stdc++.h>
using namespace std;

class graphh
{
public:
    int v;
    list<int>*arr;
    vector<int> parent;
    vector<int> visited;
    vector<int>distance;
    graphh(int x)
    {
        v=x;
        arr=new list<int>[v+1];
        for(int i=0;i<=x;i++)
        {
            parent.push_back(0);
            visited.push_back(0);
            distance.push_back(0);
        }
    }
    void setedge(int a,int b)
    {
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    void bfs(int src)
    {
        for(int i=0;i<=v;i++)
        {
            parent[i]=0;
            visited[i]=0;
            distance[i]=0;
        }

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
                    distance[*i]=distance[u]+1;

                }
            }
        }
        return;

    }
};

int main()
{
    int n;
    int cse=0;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        map<long long,int>mp;
        int node[31];
        graphh g(31);
        int xx=1;
        while(n--)
        {
            long long a,b;
            cin>>a>>b;
            if(mp[a]==0)
            {
                mp[a]=xx++;
                //node[xx-1]=a;
            }
            if(mp[b]==0)
            {
                mp[b]=xx++;
                //node[xx-1]=b;
            }
            g.setedge(mp[a],mp[b]);
            //cout<<xx<<endl;

        }
        while(1)
        {
            //cse++;
            long long a,b;
            cin>>a>>b;
            if(a==0 && b==0)
                break;
            cse++;
            g.bfs(mp[a]);
            int cnt=0;
            for(int i=1;i<xx;i++)
            {
                if(g.distance[i]>b)
                    cnt++;
            }
            printf("Case %d: %d nodes not reachable from node %lld with TTL = %lld.\n",cse,cnt,a,b);
        }
        //cse--;

    }
}

