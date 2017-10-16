#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long m;
    while(cin>>n>>m)
    {
        int cnt = 0,a,b;
        vector< long long > v;
        vector< pair< long long,long long > > vp;
        vector< long long >::iterator up;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&a,&b);
            vp.push_back(make_pair(a,a+b));
            v.push_back(a+b);
        }
        sort(vp.begin(),vp.end());
        sort(v.begin(),v.end());
        cnt++;
        for(int i=1;i<n;i++)
        {

            up = upper_bound(v.begin(),v.end(),vp[i].first);
            int pos = up-v.begin();
            if(pos==0)
            {
                cnt++;
            }
            else if((vp[i].first>v[pos-1]+m)) cnt++;

        }
        printf("%d\n",n-cnt);
    }

    return 0;
}
