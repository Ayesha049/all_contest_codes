#include<bits/stdc++.h>
using namespace std;

class graph
{
public:
    int v;
    int flow;
    int weight[100][100];
    int visited[100];
    list<int>*arr;
    int dtime[100];
    int ftime[100];
    graph(int n)
    {
        v=n;
        flow=0;
        arr=new list<int>[n+1];
        for(int i=1;i<=n;i++)
        {
            visited[i]=0;
            dtime[i]=0;
            ftime[i]=0;
            for(int j=1;j<=n;j++)
            {
                weight[i][j]=0;
            }
        }
    }
    void setedge(int a,int b,int capacity)
    {
         arr[a].push_back(b);
         weight[a][b]=capacity;
    }

    void dfs(int src)
    {

        int time=1;
        stack<int> st;
        st.push(src);
        dtime[src]=time;
        visited[src]=1;
        while(!st.empty())
        {
            int flag=0;
            int u=st.top();
            list<int>::iterator i;
            for(i=arr[u].begin();i!=arr[u].end();i++)
            {
                if(visited[*i]==0)
                {
                    time++;
                    dtime[*i]=time;
                    visited[*i]=1;
                    st.push(*i);
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                //cout<<st.top()<<" ";
                time++;
                ftime[st.top()]=time;
                st.pop();
            }

        }
    }
};

int main()
{

    graph g(8);
    g.setedge(1,2,10);
    g.setedge(2,5,9);
    g.setedge(5,8,10);

    g.setedge(1,3,5);
    g.setedge(3,6,8);
    g.setedge(6,8,10);



    g.setedge(1,4,15);
    g.setedge(4,7,30);
    g.setedge(8,7,10);

    g.setedge(2,6,15);
    g.setedge(5,6,15);
    g.setedge(6,7,15);
    g.setedge(7,3,6);




    g.dfs(1);

    for(int i=1;i<=9;i++)
    {
        cout<<i<<" "<<g.dtime[i]<<" "<<g.ftime[i]<<endl;
    }
}
