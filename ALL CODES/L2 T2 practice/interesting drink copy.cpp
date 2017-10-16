
#include <bits/stdc++.h>
using namespace std;
int n,res,med,izq,der,precios[100010],q,dinero[100010];

int arreglos(int x){
    res=0;
    der=n;
    izq=1;
    while(izq<=der){
        med=(izq+der)/2;
        if(precios[med]<=x){
            res=med;
            izq=med+1;
        }else{
            der=med-1;
        }
    }
    return res;
}

int main(){
    scanf("%d",&n);
    for(int x=1;x<=n;x++){
        scanf("%d",&precios[x]);
    }
    sort(precios+1,precios+n+1);
    scanf("%d",&q);
    for(int x=1;x<=q;x++){
        if(x<q)scanf("%d\n",&dinero[x]);
        if(x==q)scanf("%d",&dinero[x]);
    }
    for(int x=1;x<=q;x++){
        if(x<q)printf("%d\n",arreglos(dinero[x]));
        if(x==q)printf("%d",arreglos(dinero[x]));
    }
}
