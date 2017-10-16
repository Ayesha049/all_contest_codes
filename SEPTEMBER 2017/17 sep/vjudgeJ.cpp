#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    int p;
    cin>>n;
    p=n*10000000;
    vector < int > v;
    cin>>n;
    int cc=0;
    for(i=0; i<n; i++)
    {
        //cin>>k;
        scanf("%d",&k);
        v.push_back(k);
        if(k==(p/2)) cc++;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    vector < int > :: iterator it;
    it=find(v.begin(),v.end(),p/2);
    if(it!= v.end())
    {
        if(cc==1)
            *it=p+1;
    }
    for(i=0; i<n; i++)
    {
        it=find(v.begin(),v.end(),p-v[i]);
        if(it!= v.end())
        {
            cout<<"yes "<<p-v[i]<<" "<<v[i];
            return 0;
        }
    }
    cout<<"danger"<<endl;


}

/*
1
4
9999998
1
5000000
2
*/
