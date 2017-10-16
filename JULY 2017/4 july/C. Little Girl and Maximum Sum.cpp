#include<bits/stdc++.h>
using namespace std;

long long arr[200001];
long long d[200001];
int main()
{
    int n,q;
    scanf("%d %d", &n,&q);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    //reverse(arr,arr+n);
    int l,r;
    while(q--)
    {
        scanf("%d %d", &l,&r);
        d[l-1]++;
        d[r]--;
    }
    for(int i=0;i<n;i++) d[i]+=d[i-1];
    long long cnt=0;
    sort(d,d+n);
    //reverse(d,d+n);
    for(int i=0;i<n;i++)
    {
        cnt+=(arr[i]*d[i]);
    }
    cout<<cnt<<endl;
}

