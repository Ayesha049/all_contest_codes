#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	string s1,s2;
	cin>>x>>s1>>s2;
	if(s2[0]=='w')
	{
		if(x==5||x==6)
			printf("53\n");
		else
			printf("52\n");
	}
	else
	{
		if(x<=29)
			printf("12\n");
		else if(x==30)
			printf("11\n");
		else if(x==31)
			printf("7\n");
	}
	return 0;
}
