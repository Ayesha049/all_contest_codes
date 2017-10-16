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
    void setedge(int a,int b)
    {
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    void renew()
    {
        for(int i=0; i<=v; i++)
        {
            arr[i].clear();
        }
        arr=new list<int>[v+1];

    }
    void bfs(int src)
    {
        for(int i=0; i<=v; i++)
        {
            parent[i]=0;
            visited[i]=0;
            distance[i]=0;
        }

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

                }
            }
        }
        return;

    }
};


int main()
{
    int test;
    string fal;
    cin>>test;
    while(test--)
    {
        string dic[201];
        //map<string,int> mp;
        int x=0;
        while(cin>>fal)
        {
            if(fal=="*")
                break;
            dic[x++]=fal;

        }
        graphh g(201);
        string s;
        while(1)
        {
            getline(cin,s);
            if(s.empty())
                break;
            string buf,fst,fnl;
            vector<string> inputs;
            stringstream ss(s);
            int t=0;
            while(ss>>buf)
            {
                inputs.push_back(buf);
                t++;
            }
            for(int i=0; i<t;)
            {
                map<string,int>mp;
                fst=inputs[i];
                fnl=inputs[i+1];
                i=i+2;
                int len=fst.length();
                vector<string>words;
                int pos=0;
                for(int j=0; j<x; j++)
                {
                    if(dic[j].length()==len)
                    {
                        words.push_back(dic[j]);
                    }
                }
                //sort(words.begin(),words.end());
                /*for(int j=0; j<words.size(); j++)
                {
                    cout<<words[j]<<endl;
                }*/
                //sort(words.begin(),words.end());
                for(int j=0; j<words.size(); j++)
                {
                    mp[words[j]]=j;
                }

                //pos=mp[fst];
                //string src=fst;
                for(int j=0; j<words.size(); j++)
                {
                    for(int l=0; l<words.size(); l++)
                    {
                        int dif=0;
                        for(int k=0; k<len; k++)
                        {
                            if(words[j][k]!=words[l][k])
                                dif++;
                            if(dif>1)
                                break;
                        }
                        if(dif==1)
                        {
                            g.setedge(mp[words[l]],mp[words[j]]);
                        }
                    }

                }
                g.bfs(mp[fst]);
                cout<<fst<<" "<<fnl<<" "<<g.distance[mp[fnl]]<<endl;
                g.renew();
            }



        }
        //cout<<"intput complete  "<<x<<endl;
    }
}
