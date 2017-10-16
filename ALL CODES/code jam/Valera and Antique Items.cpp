#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n>>a;
    vector<int>ans;
    for(int i=1;i<=n;i++)
    {
        int nn;
        cin>>nn;
        int mn= INFINITY;
        for(int j=0;j<nn;j++)
        {
            int aa;
            cin>>aa;
            if(aa<mn) mn=aa;
        }
        if(mn<a) ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
