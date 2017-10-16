#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

map<int ,int>mp;
int main()
{

	std::ios::sync_with_stdio(false);
 	int q,l,m;
 	long long int b1;
 	cin>>b1>>q>>l>>m;

 	int sum=0;
 	for(int i=1;i<=m;i++)
 	{
 		int x;
 		cin>>x;
 		mp[x]=1;
	 }
	 if(abs(b1)>l)
	 {
	 	cout<<0;
	 	return 0;
	 }
	 if(b1==0)
	 {
	 	if(mp[0]==1)
	 	cout<<0;
	 	else
	 	cout<<"inf";
	 }
	 else if(q==0)
	 {
	 	if(mp[0]==0)
	 	cout<<"inf";
	 	else
	 	{
	 		if(mp[b1]==0&&abs(b1)<=l)
	 		cout<<1;
	 		else
	 		cout<<0;
		 }
	 }
	 else if(q==1)
	 {
	 	if(mp[b1]==0&&b1<=l)
	 	cout<<"inf";
	 	else
	 	cout<<0;
	 }
	 else if(q==-1&&mp[b1]==1&&mp[-b1]==1)
	 {
	 	cout<<0;
	 }
	else
	{
		while(abs(b1)<=l&&sum<=60)
		{
			if(mp[b1]==0)
			sum++;
			b1*=q;
		}
		if(sum>=60)
		cout<<"inf";
		else
		cout<<sum;
	}
	return 0;
}
