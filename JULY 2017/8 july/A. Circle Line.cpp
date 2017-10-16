#include<bits/stdc++.h>
using namespace std;

int d[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>d[i];
    int s,t;
    cin>>s>>t;
    int a=min(s,t);
    int b=max(s,t);
    int xx=0;
    for(int i=a;i<b;i++) xx+=d[i];
    int yy=0;
    for(int i=1;i<a;i++) yy+=d[i];
    for(int i=b;i<=n;i++) yy+=d[i];
    xx=min(xx,yy);
    cout<<xx<<endl;
}
