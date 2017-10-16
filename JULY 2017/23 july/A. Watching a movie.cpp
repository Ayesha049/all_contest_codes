#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int cnt=0;
    int a1,b1;
    cin>>a1>>b1;
    vector<int>vc;
    cnt+=(b1-a1+1);
    vc.push_back(a1-1);
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        cnt+=(b-a+1);
        vc.push_back(a-b1-1);
        b1=b;
    }
    for(int i=0;i<vc.size();i++) cnt+=(vc[i]%x);
    cout<<cnt<<endl;
}

