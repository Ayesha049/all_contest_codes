#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    vector<int>vc;
    int a;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        cnt+=(a/10);
        vc.push_back(10-(a%10));
    }
    sort(vc.begin(),vc.end());
    for(int i=0; i<n; i++)
    {
        if(vc[i]>k) break;
        if(vc[i]!=0)
        {
            k-=vc[i];
            cnt++;
        }
    }
    cnt+=k/10;
    int mx=(n*10);
    cnt=min(mx,cnt);
    cout<<cnt<<endl;
}

