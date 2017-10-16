#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> >vc;
    vector<int>tmp1;
    vector<int>t1;
    int a;
    vector<vector<int> >up;
    vector<int>mx;
    for(int j=0; j<m; j++)
    {
        cin>>a;
        tmp1.push_back(a);
        t1.push_back(1);
    }
    vc.push_back(tmp1);
    up.push_back(t1);
    mx.push_back(1);
    for(int i=1; i<n; i++)
    {
        vector<int>tmp;
        vector<int>t;
        int mxx=1;
        for(int j=0; j<m; j++)
        {
            cin>>a;
            tmp.push_back(a);
            if(a<vc[i-1][j]) t.push_back(1);
            else t.push_back(up[i-1][j]+1);
            mxx=max(mxx,t[j]);
        }
        vc.push_back(tmp);
        up.push_back(t);
        mx.push_back(mxx);

    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int d=r-l+1;
        if(d==1) cout<<"Yes"<<endl;
        else
        {
            int flag=0;
            if(mx[r-1]>=d) flag=1;
            if(flag==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}

