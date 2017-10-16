#include <iostream>
#include <string.h>
#include <vector>
#include <map>
using namespace std;
map<string,int> m;
pair<int,int> arr[100005];
vector<pair<int,int> > v[100005];
vector<pair<pair<int,int>,pair<int,int> > > sus;
bool valid[100005],vis[100005];
int n,cum[100005];
int find(int x)
{
	if (x!=arr[x].first)
	x=find(arr[x].first);
	return arr[x].first;
}
bool Union(int x,int y)
{
	x=find(x);
	y=find(y);
	if (x==y)
	return 0;
	if (arr[x].second<arr[y].second)
	arr[x].first=y;
	else if (arr[x].second>arr[y].second)
	arr[y].first=x;
	else
	{
		arr[x].first=y;
		arr[y].second++;
	}
	return 1;
}
void dfs(int node,int pnode,int x)
{
	vis[node]=1;
	cum[node]=x;
	for (int i=0;i<v[node].size();i++)
	{
		if (v[node][i].first!=pnode)
		dfs(v[node][i].first,node,(x^v[node][i].second));
	}
}
void preprocess()
{
	for (int i=0;i<n;i++)
	{
		if (!vis[i])
		dfs(i,i,0);
	}
	for (int i=0;i<sus.size();i++)
	{
		int x=sus[i].first.first,y=sus[i].first.second,idx=sus[i].second.first,r=sus[i].second.second;
		if ((cum[x]^cum[y])==r)
		valid[idx]=1;
		else
		valid[idx]=0;
	}
}
int main()
{
	int q1,q2;
	cin >> n >> q1 >> q2;
	for (int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		m[s]=i;
		arr[i]=make_pair(i,0);
	}
	for (int i=0;i<q1;i++)
	{
		int t;
		string s1,s2;
		cin >> t >> s1 >> s2;
		int x=m[s1],y=m[s2];
		if (Union(x,y))
		{
			v[x].push_back(make_pair(y,t-1));
			v[y].push_back(make_pair(x,t-1));
			valid[i]=1;
		}
		else
		sus.push_back(make_pair(make_pair(x,y),make_pair(i,t-1)));
	}
	preprocess();
	for (int i=0;i<q1;i++)
	{
		if (valid[i])
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
	}
	while (q2--)
	{
		int t;
		string s1,s2;
		cin >> s1 >> s2;
		int x=m[s1],y=m[s2];
		if (find(x)!=find(y))
		cout << 3 << endl;
		else if (cum[x]^cum[y])
		cout << 2 << endl;
		else
		cout << 1 << endl;
	}
}
