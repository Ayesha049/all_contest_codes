#include<bits/stdc++.h>
using namespace std;


class graphh
{
    int v;
    list<int>*arr;
public:
    int red;
    int black;
    int visited[20001];
    graphh(int v)
    {
        red=0;
        black=0;
        this->v=v;
        arr=new list<int>[v+1];
        for(int i=1; i<=v; i++)
        {
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
        black++;
        q.push(src);

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
                //if(arr[u][v] && color[v]==-1 && u!=v)
                if(visited[*i]==0)
                {
                    if(visited[u]==1)
                    {
                        visited[*i]=2;
                        red++;
                    }
                    else
                    {
                        visited[*i]=1;
                        black++;
                    }
                    q.push(*i);

                }
                //else if(arr[u][v] && color[u]==color[v] &&u!=v ) return;
            }
        }
        return;
    }
    ~graphh()
    {

    }

};
int main()
{
    int test;
    //cin>>test;
    scanf("%d",&test);
    int ii=0;
    while(test--)
    {
        ii++;
        int ed;
        scanf("%d",&ed);
        graphh g(ed+1);
        int s;
        while(ed--)
        {
            int xx,yy;
            scanf("%d %d",&xx,&yy);
            s=xx;
            g.setedge(xx,yy);
        }
        g.bfs(s);
        if(g.red>g.black)
            //cout<<"Case "<<ii<<": "<<g.red<<endl;
            printf("Case %d: %d\n",ii,g.red);
        else
            //cout<<"Case "<<ii<<": "<<g.black<<endl;
            printf("Case %d: %d\n",ii,g.black);
    }
}

/*
7 11
1 2
2 3
4 3
3 5
4 5
5 4
1 4
2 5
6 7
7 3
6 3
b 1
d 1
*/

