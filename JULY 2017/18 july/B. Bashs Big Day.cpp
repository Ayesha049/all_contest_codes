#include<bits/stdc++.h>
using namespace std;

int pr[100001];

void seive()
{
    pr[1]=1;
    for(int i=2;i<=100000;i++)
    {
        if(pr[i]) continue;

		for(int j=2*i;j<100000;j+=i) pr[j]=1;
    }
}


int main()
{
    seive();
    int n;
    cin>>n;
    int mx=0;
    int a;
    vector<int>vc;
    for(int i=1;i<=100000;i++)
    {
        if(pr[i]==0) vc.push_back(i);
    }
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(int j=0;j<vc.size();j++)
        {
            if(a%vc[j]==0) mp[vc[j]]++;
            if(a<vc[j]) break;
        }

    }

    mx=0;
    for(int i=0;i<vc.size();i++)
    {
        mx=max(mx,mp[vc[i]]);
    }
    cout<<mx<<endl;
}


/*const int N = 100000 + 5;
int a[N];
int main()
{
    int n, i, m;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    while(n--)
    {
        scanf("%d", &m);
        for(i = 1; i * i < m; i++)
        {
            if(m % i == 0)
            {
                a[i] ++;
                a[m / i]++;
            }
        }
        if(i * i == m) a[i] ++;
    }
    int ans = 1;
    for(i = 2; i < N; i++)
    {
        ans = max(ans, a[i]);
    }
    printf("%d\n", ans);
}
*/
