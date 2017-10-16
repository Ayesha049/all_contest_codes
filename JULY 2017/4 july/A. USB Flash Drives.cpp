#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vc.push_back(a);
    }
    int cnt=0;
    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());
    for(int i=0;i<n;i++)
    {
        cnt++;
        m-=vc[i];
        if(m<=0) break;
    }
    cout<<cnt<<endl;
}

