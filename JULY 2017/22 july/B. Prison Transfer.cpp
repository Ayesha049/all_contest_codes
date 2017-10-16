#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,c;
    cin>>n>>t>>c;
    vector<int>vc;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        vc.push_back(a);
    }
    int cnt=0;
    int l,r;
    l=0;
    r=0;
    while(1)
    {
        if(r==n) break;
        if(vc[r]>t)
        {
            r++;
            l=r;
        }
        else if((r-l+1)<c) r++;
        else
        {
            cnt++;
            r++;
            l++;
        }
    }
    cout<<cnt<<endl;
}

