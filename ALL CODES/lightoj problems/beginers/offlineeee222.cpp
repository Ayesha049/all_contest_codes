#include<bits/stdc++.h>
using namespace std;


stack<int> st;

class graph
{
public:
    int v;
    int visited[100];
    int arr[100][100];
    int weight[100][100];
    int iniarr[30][30];
    int iniweight[30][30];
    int dtime[100];
    int ftime[100];
    graph(int n)
    {
        v=n;
        for(int i=1; i<=n; i++)
        {
            visited[i]=0;
            dtime[i]=0;
            ftime[i]=0;
            for(int j=1; j<=n; j++)
            {
                arr[i][j]=0;
                weight[i][j]=0;
                iniarr[i][j]=0;
                iniweight[i][j]=0;
            }
        }
    }
    void setedge(int a,int b,int cap)
    {
        arr[a][b]=1;
        iniarr[a][b]=1;
        weight[a][b]=cap;
        iniweight[a][b]=cap;
    }

    void changedge(int a,int b)
    {
        arr[a][b]=0;
        arr[b][a]=1;
        weight[a][b]=0;

    }

    int dfs(int src)
    {
        int bc=100;
        int time=1;
        st.push(src);
        dtime[src]=time;
        visited[src]=1;
        while(!st.empty() && bc--)
        {
            int flag=0;
            int u=st.top();
            //st.pop();
            int i;
            if(arr[u][v]==1)
            {
                return 1;
            }
            for(i=2; i<=v; i++)
            {

                if(arr[u][i]==1  && weight[u][i]!=0)
                {
                    time++;
                    dtime[i]=time;
                    //visited[i]=1;
                    //cout<<st.top()<<"stackkkk ";
                    st.push(i);
                    flag=1;
                    break;
                }


            }
            if(flag==0 && !st.empty())
            {
                //cout<<st.top()<<"stackkkkpopppppppppppppp ";
                time++;
                int zzz=st.top();

                //st.pop();
                weight[zzz][st.top()]=0;
                weight[st.top()][zzz]=0;

                break;

            }

        }
        return 0;
    }
};


int maxflow(graph obj)
{
    int flow=0;
    int node[100];
    int bb=0;
    while(obj.dfs(1)==1)
    {
        bb++;
        if(bb==50)
            return flow;
        node[0]=8;
        int i=1;
        while(!st.empty())
        {
            //cout<<st.top()<<endl;
            node[i++]=st.top();
            st.pop();
        }
        int mn=100;
        for(int j=i-1; j>=1; j--)
        {
            //cout<<obj.weight[node[j]][node[j-1]]<<"mndjdguysdufg"<<endl;
            if(obj.weight[node[j]][node[j-1]]<mn)
                mn=obj.weight[node[j]][node[j-1]];
        }
        flow+=mn;
        //cout<<endl<<endl<<flow<<endl<<endl;
        for(int j=i-1; j>=1; j--)
        {
            if(obj.weight[node[j]][node[j-1]]>mn)
                obj.weight[node[j]][node[j-1]]=obj.weight[node[j]][node[j-1]]-mn;
            else if(obj.weight[node[j]][node[j-1]]==mn)
            {
                obj.changedge(node[j],node[j-1]);
            }


        }

    }
    return flow;

}


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
    g.setedge(7,8,10);

    g.setedge(2,6,15);
    g.setedge(5,6,15);
    g.setedge(6,7,15);
    g.setedge(7,3,6);
   // g.setedge(2,3,4);




    //g.dfs(1);

    cout<<maxflow(g)<<endl;

    int aaa[10];
    int ii=0;
    while(!st.empty())
    {
        aaa[ii++]=st.top();
        st.pop();
    }
    for(int i=0;i<ii;i++)
    {
        //cout<<endl<<endl<<endl<<aaa[i]<<endl<<endl<<endl;
        for(int j=1;j<=8;j++)
        {
            if(g.iniarr[aaa[i]][j]==1)
            {
                //cout<<"myconn"<<j<<endl;
                int fg=0;
                for(int k=0;k<ii;k++)
                {
                    if(aaa[k]==j)
                    {
                        fg=1;
                        break;
                    }
                }
                if(fg==0)
                    cout<<aaa[i]<<" "<<j<<endl;
                //break;
            }
        }
    }

}
