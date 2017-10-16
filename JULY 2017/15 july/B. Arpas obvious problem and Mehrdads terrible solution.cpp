#include<iostream>
#include<map>
using namespace std;
map<int,int>mp;
#define ll long long
int a[2621450];
int main()
{
    int m,x,i;
    ll ans = 0;
    cin>>m>>x;
    for(i=1;i<=m;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(m==1){
        cout<<"0"<<endl;
        return 0;
    }
    else{
        for(i=1;i<=m;i++){
            if(mp[(x^a[i])]>0){
                if((x^a[i])==a[i])
                    ans+=mp[(x^a[i])]-1;
                else
                    ans+=mp[(x^a[i])];
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}

