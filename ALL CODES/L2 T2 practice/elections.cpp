#include<bits/stdc++.h>
using namespace std;
int winner[101];

int main()
{
    int n,m;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        int mx=-INFINITY;
        int ind=-1;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            if(a>mx)
            {
                mx=a;
                ind=j;
            }
        }
        winner[ind]++;
    }
    int mxx=-INFINITY;
    int winn=-1;
    for(int i=0;i<m;i++)
    {
        if(winner[i]>mxx)
        {
            mxx=winner[i];
            winn=i;
        }
    }
    cout<<winn+1<<endl;
}
