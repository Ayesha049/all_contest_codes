#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>vc;
    int cnt=0;
    int a,b;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        cnt+=(a*b);
        vc.push_back(cnt);
    }
    vector<int>::iterator low;
    for(int i=0; i<m; i++)
    {
        scanf("%d",&a);
        low=lower_bound (vc.begin(), vc.end(),a);
        int it1=(low- vc.begin());
        printf("%d\n", it1+1);
    }
}

