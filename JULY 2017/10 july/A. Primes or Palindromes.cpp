#include<bits/stdc++.h>
using namespace std;


int pr[10000001];
int palcheck(int n)
{
    int i,a[20],o=0;

	while(n){

		a[o++]=n%10;

		n/=10;

	}

	for(i=0;i<o;i++) if(a[i]!=a[o-i-1]) return 0;

	return 1;

}

void seive()
{
    pr[1]=1;
    for(int i=2;i<=2000000;i++)
    {
        if(pr[i]) continue;

		for(int j=2*i;j<2000000;j+=i) pr[j]=1;
    }
}

int main()
{
    int p,q;
    cin>>p>>q;
    int prcnt=0;
    int plcnt=0;
    seive();
    int ans;
    for(int i=1;i<=2000000;i++)
    {
        if(pr[i]!=1) prcnt++;
        plcnt+=palcheck(i);
        if(q*prcnt<=p*plcnt) ans=i;
    }
    cout<<ans<<endl;
}
/*
#include<bits/stdc++.h>

using namespace std;

int vst[2000000],p,q,i,j,ss,sp,ans;

int aa(int n){

	int i,a[20],o=0;

	while(n){

		a[o++]=n%10;

		n/=10;

	}

	for(i=0;i<o;i++) if(a[i]!=a[o-i-1]) return 0;

	return 1;

}

int main(){

	scanf("%d%d",&p,&q);

	for(i=2,vst[1]=1;i<2000000;i++){

		if(vst[i]) continue;

		for(j=2*i;j<2000000;j+=i) vst[j]=1;

	}

	for(i=1;i<2000000;i++){

		if(!vst[i]) sp++;

		ss+=aa(i);

		if(q*sp<=p*ss) ans=i;

	}

	printf("%d\n",ans);

	return 0;

}
*/
