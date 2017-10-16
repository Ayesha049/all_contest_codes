#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    vector<pair<int,int> >vc;
    int a,b;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        vc.push_back(make_pair(a,b));
    }
    sort(vc.begin(),vc.end());
    int cnt=0;
    int pos=0;
    for(int i=1;i<n;i++)
    {
        if(vc[i].second<vc[pos].second) cnt++;
        else pos=i;
    }
    cout<<cnt<<endl;
}

