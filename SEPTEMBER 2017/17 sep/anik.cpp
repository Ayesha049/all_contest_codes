#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
map<int,int> Mark;
int Val[MAX];
int p,L,n;

void solve(){
    for(int i=1;i<=p;i++){
        Mark[Val[i]]--;
        if(Mark[n*10000000-Val[i]]>0){
            printf("yes %d %d\n",Val[i],n*10000000-Val[i]);
            return;
        }
    }
    printf("danger\n");
}

int main(){
    while(scanf("%d",&n)==1){
        scanf("%d",&p);
        Mark.clear();

        for(int i=1;i<=p;i++){
            scanf("%d",&L);
            Mark[L]++;
            Val[i]=L;
        }

        sort(Val+1,Val+p+1);
        solve();
    }
}
