#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int b,g;
    cin>>b;
    map<int,int>boy;
    int x;
    for(int i=0;i<b;i++)
    {
        scanf("%d",&x);
        boy[x]=1;
    }
    cin>>g;
    int bcnt=b;
    map<int,int>girl;
    for(int i=0;i<g;i++)
    {
        scanf("%d",&x);
        girl[x]=1;
    }
    int gcnt=g;
    int flag=0;
    for(int i=0;i<=10000000;i++)
    {
        if(boy[i%n]==1)
        {
            if(girl[i%m]==0)
            {
                girl[i%m]=1;
                gcnt++;
            }
        }
        else if(girl[i%m]==1)
        {
            if(boy[i%n]==0)
            {
                boy[i%n]=1;
                bcnt++;
            }
        }
        if(bcnt==n && gcnt==m)
        {
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

}

