#include<bits/stdc++.h>
using namespace std;

int color[100001];
class graphh
{
    int v;
    list<int>*arr;
    list<int>*arr1;
public:
    int visited[100001];

    graphh(int v)
    {
        this->v=v;
        arr=new list<int>[v+1];
        arr1=new list<int>[v+1];
        for(int i=1; i<=v; i++)
        {
            visited[i]=0;
        }
    }

    void setedge(int a,int b)

    {
        arr[a].push_back(b);
        arr1[a].push_back(b);
        arr[b].push_back(a);

    }

    int bfs(int src)
    {
        for(int i=1; i<=v; i++)
        {
            visited[i]=0;
        }

        queue<int>q;
        visited[src]=1;
        q.push(src);
        int clr=color[src];
        //cout<<src<<" ";;
        while(!q.empty())
        {
            int u;
            u=q.front();
            //cout<<u<<" ";
            q.pop();

            list<int>::iterator i;
            for (i = arr1[u].begin(); i != arr1[u].end(); ++i)
            {
                //if(arr[u][v] && color[v]==-1 && u!=v)
                //if(visited[*i]==0)
                {
                    visited[*i]=1;
                    q.push(*i);
                    if(color[*i]!=clr)
                        return 0;
                }
                //else if(arr[u][v] && color[u]==color[v] &&u!=v ) return;
            }
        }
        return 1;

    }
    int isit(int a)
    {
        cout<<"calliing   "<<a<<endl<<endl;
        int flag=0;
        list<int>::iterator i;
        for (i = arr[a].begin(); i != arr[a].end(); ++i)
        {
            cout<<*i<<" ";
            int xx=bfs(*i);
            if(xx==0)
            {
                cout<<"ygberhyk   "<<*i;
                flag=1;
                break;
            }
        }
        cout<<endl;
        if(flag==1)
            return 0;
        return 1;
    }
};

int main()
{

    int n;
    cin>>n;
    graphh g(n);
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        g.setedge(a,b);
    }
    for(int i=1;i<=n;i++)
    {
        cin>>color[i];
    }
    int ans=-1;
    for(int i=1;i<=n;i++)
    {
        int xxxx=g.isit(i);
        if(xxxx==1)
        {
            ans=i;
            break;
        }
    }
    if(ans==-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl<<ans<<endl;
    }


}

