#include<bits/stdc++.h>
using namespace std;
class Graph
{
public:
    int V, E;
    int count;
    int parent[100];

    int edges[100][3];

    Graph(int v, int e)
    {
        count=0;
        V= v; E=e;
    }

    void addEdge(int u, int v, int w)
    {
        edges[count][0]=w;
        edges[count][1]=u;
        edges[count][2]=v;

    }


    void check()
    {
        for(int i=0; i<=V; i++)
        {
            parent[i]=i;
        }
    }

    int Find(int x)
    {
        if(x!=parent[x])
        {
            parent[x]= Find(parent[x]);
        }
        return parent[x];
    }

    void Union(int x, int y)
    {
        x= Find(x);
        y= Find(y);

        if(x!=y)
        {
            parent[x]=y;
        }
    }

    int MST_KRUSKAL()
    {
        int mst_weight=0 ;

        check();
        for(int i=0;i<count;i++)
        {
            int u= edges[i][1];
            int v= edges[i][2];

            int findu= Find(u);
            int findv= Find(v);

            //if(findu!= findv)
            {
                cout<<u<<" "<<v<<endl;
                mst_weight+=edges[i][0];
                //Union(findu, findv);
            }
        }

        return mst_weight;
    }
};
int main()
{
    int a=9, b=14;
    Graph g(a,b);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    cout<<g.MST_KRUSKAL()<<endl;

}
