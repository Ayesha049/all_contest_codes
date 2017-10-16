#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,n;
    cin>>p>>n;
    map<int,int>mp;
    int flag=-1;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        a=a%p;
        if(flag==-1)
        {
            if(mp[a]!=0) flag=i;
        }
        mp[a]++;
    }
    cout<<flag<<endl;

}

