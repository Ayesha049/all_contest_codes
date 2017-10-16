/*#include<bits/stdc++.h>
using namespace std;

int ans[100001];
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>d;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        ans[i]=a;
        if(mp[a]!=0)
        {
            d.push_back(a);
        }
        mp[a]=i;

    }
    vector<int>need;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0) need.push_back(i);
    }
    sort(d.begin(),d.end());
    for(int i=0;i<d.size();i++)
    {
        ans[mp[d[i]]]=need[i];
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}

*/

#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int n,a[100100],vis[100100];
    memset(vis,0,sizeof(vis));
    scanf("%d",&n);
    for(int i=1; i<=n; i++)scanf("%d",&a[i]),vis[a[i]]++;
    for(int i=1,j=1; i<=n; i++){while(vis[j])j++;if(vis[a[i]]>1||a[i]>n)vis[a[i]]--,vis[j]++,a[i]=j;}
    for(int i=1; i<=n; i++)printf("%d ",a[i]);
    printf("\n");
    return 0;
}
