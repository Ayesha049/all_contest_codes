#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,k,n;
    cin>>y>>k>>n;
    int a=n%k;
    n-=a;
    if(n<=y) cout<<"-1"<<endl;
    else
    {
        vector<int>vc;
        while(1)
        {
            int x=n-y;
            if(x<=0) break;
            vc.push_back(x);
            n-=k;
        }
        sort(vc.begin(),vc.end());
        for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
    }

}

