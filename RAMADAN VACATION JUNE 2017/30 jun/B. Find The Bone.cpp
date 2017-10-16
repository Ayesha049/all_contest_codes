#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    //map<int,int>pos;
    //for(int i=1;i<=n;i++) pos[i]=1;
    int f=1;
    map<int,int>hole;
    int a;
    for(int i=0; i<m; i++)
    {

        scanf("%d",&a);
        hole[a]=1;
    }
    int flag=0;
    if(hole[f]==1) flag=1;
    int b;
    for(int i=0; i<k; i++)
    {

        scanf("%d %d",&a,&b);
        if(flag==0)
        {
            if(a==f) f=b;
            else if(b==f) f=a;
            if(hole[f]==1)
            {
                flag=1;
                break;
            }

        }

    }
    printf("%d",f);
}

