#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n*n;
    vector<pair<int,int> > vc;
    for(int i=1; i<=a/2; i++)
    {
        vc.push_back(make_pair(i,(a-i+1)));
    }
    int in=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            cout<<vc[in+j].first<<" "<<vc[in+j].second<<" ";
        }
        in+=n/2;
        cout<<endl;
    }
}
