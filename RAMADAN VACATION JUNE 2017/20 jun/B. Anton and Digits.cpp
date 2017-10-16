/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int a=min(k2,min(k5,k6));
    int sum= a*256;
    k2=k2-a;
    a=min(k2,k3);
    sum+=(a*32);
    cout<<sum<<endl;
}
*/

#include <bits/stdc++.h>
using namespace std;


int isprime(int n)
{
    if(n==2)
        return 1;
    if(n==1)
        return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    int ii=0;
    while(t--)
    {
        ii++;
        int n;
        cin>>n;
        vector< pair <int,int> > vc;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(mp[a]==0) mp[a]=i+1;
            vc.push_back(make_pair(a,mp[a]));
        }
        sort(vc.begin(),vc.end());
        int s=vc[n-1].second;
        int r=0;
        int mx=vc[n-1].second;
        int flag=0;
        for(int i=n-2; i>=0; i--)
        {
            //cout<<vc[i].first<<" "<<vc[i].second<<endl;
            if(vc[i].second<mx)
            {
                mx=vc[i].second;
                if(flag==0)
                {
                    r+=vc[i].second;
                    flag=1;
                }
                else
                {
                    s+=vc[i].second;
                    flag=0;
                }
            }
        }
        cout<<"Game "<<ii<<":"<<endl;
        n= abs(s-r);
        if(isprime(n)==0)
        {
            cout<<"Shafi="<<s<<" Rafi="<<r<<endl<<"Shafi win"<<endl;
        }
        else cout<<"Rafi="<<r<<" Shafi="<<s<<endl<<"Rafi win"<<endl;
    }


    return 0;
}
