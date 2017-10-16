#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        vc.push_back(a);
    }
    sort(vc.begin(),vc.end());
    int cnt=0;
    for(int i=1;i<n-1;i++)
    {
        if(vc[i]>vc[0] && vc[i]<vc[n-1]) cnt++;
    }
    cout<<cnt<<endl;
}

