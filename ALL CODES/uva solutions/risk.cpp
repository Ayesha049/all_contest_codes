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
    void renew()
    {
        for(int i=0;i<=20;i++)
        {
            arr[i].clear();
        }
        arr=new list<int>[v+1];

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
    int ed=0;
    graphh g(21);
    int cse=1;
    while(cin>>n)
    {
        ed++;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            g.setedge(ed,a);
        }
        if(ed==19)
        {
            cout<<"Test Set #"<<cse<<endl;
            int x;
            cin>>x;
            for(int i=1;i<=x;i++)
            {
                int a,b;
                cin>>a>>b;
                g.bfs(a);
                if(a>9 && b>9)
                    cout<<a<<" to "<<b<<": "<<g.distance[b]<<endl;
                else if(a>9 && b<=9)
                    cout<<a<<" to  "<<b<<": "<<g.distance[b]<<endl;
                else if(a<=9 && b>9)
                    cout<<" "<<a<<" to "<<b<<": "<<g.distance[b]<<endl;
                else if(a<=9 && b<=9)
                    cout<<" "<<a<<" to  "<<b<<": "<<g.distance[b]<<endl;
            }
            g.renew();
            ed=0;
            cse++;
            cout<<endl;
        }
    }
}
