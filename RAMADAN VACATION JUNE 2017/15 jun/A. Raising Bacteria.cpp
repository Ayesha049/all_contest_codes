#include<bits/stdc++.h>
using namespace std;

int main(){

	int x;
	cin>>x;
	int ans=0;
	while(x!=0){
		if(x%2==1) ans++;
		x=x/2;
	}
	cout<<ans<<endl;
	return 0;
}



