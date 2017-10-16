#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 1000001

ll a[MAX];
map<ll,ll>r,l;
int main()
{
	ll n,i,j,k,sum=0;
	cin>>n>>k;

	for(i=0;i<n;++i)
	{
		cin>>a[i];
		r[a[i]]++;
	}

	for(i=0;i<n;++i)
	{
		r[a[i]]--;
		if(a[i]%k==0)
		{
			sum+=(l[a[i]/k]*r[a[i]*k]);
		}

		l[a[i]]++;
	}

	cout<<sum;
}

