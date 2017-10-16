#include<iostream>
using namespace std;
class MinST
{
public:
    int V, E;
    int count;
    int parent[100];

    int edges[100][3];

    MinST(int v, int e)
    {
        count=0;
        V= v; E=e;
        /*for(int i=0; i<=V; i++)
        {
            parent[i]=-1;
        }*/
    }

    void adedges(int u, int v, int w)
    {
        edges[count][0]=w;
        edges[count][1]=u;
        edges[count][2]=v;
        count++;

    }


    void setparent()
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

        setparent();
        for(int i=0;i<count;i++)
        {
            int u= edges[i][1];
            int v= edges[i][2];

            int findu= Find(u);
            int findv= Find(v);

            if(findu!= findv)
            {
                cout<<u<<" "<<v<<endl;
                mst_weight+=edges[i][0];
                Union(findu, findv);
            }
        }

        return mst_weight;
    }
};
int main()
{
    int a=9, b=14;
    MinST g(a,b);

    g.adedges(0, 1, 4);
    g.adedges(0, 7, 8);
    g.adedges(1, 2, 8);
    g.adedges(1, 7, 11);
    g.adedges(2, 3, 7);
    g.adedges(2, 8, 2);
    g.adedges(2, 5, 4);
    g.adedges(3, 4, 9);
    g.adedges(3, 5, 14);
    g.adedges(4, 5, 10);
    g.adedges(5, 6, 2);
    g.adedges(6, 7, 1);
    g.adedges(6, 8, 6);
    g.adedges(7, 8, 7);

    cout<<g.MST_KRUSKAL()<<endl;

}
