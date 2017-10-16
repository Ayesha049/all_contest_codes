#include<bits/stdc++.h>
using namespace std;

class graphh
{
public:
    int v;
    list<int>*arr;
    vector<int> parent;
    vector<int> visited;
    vector<int> distance;
    graphh(int x)
    {
        v=x;
        arr=new list<int>[v+1];
        for(int i=0; i<=x; i++)
        {
            parent.push_back(0);
            visited.push_back(0);
            distance.push_back(0);
        }
    }
    void setedge()
    {
        arr[1].push_back(2);
        for(int i=2; i<=v; i++)
        {
            arr[i].push_back(i-1);
            if(i<=v/2)
            {
                arr[i].push_back(2*i);
            }
        }
    }
    void bfs(int src,int sink)
    {

        queue<int>q;
        visited[src]=1;
        q.push(src);
        parent[src]=-1;
        distance[src]=0;
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
                    if(*i==sink)
                        return;

                }
            }
        }
        return;

    }
};

int main()
{
    int n,k;
    cin>>n>>k;
    if(n>k)
        cout<<n-k<<endl;
    else
    {
        graphh g(k*2);
        g.setedge();
        g.bfs(n,k);
        cout<<g.distance[k]<<endl;
    }
}
