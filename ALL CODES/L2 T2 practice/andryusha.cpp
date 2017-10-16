#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx=0;
    map<int,int>mp;
    int cnt=0;
    for(int i=0;i<(2*n);i++)
    {
        int a;
        cin>>a;
        if(mp[a]==0)
        {
            mp[a]=1;
            cnt++;
        }
        else if(mp[a]==1)
        {
            mp[a]=0;
            cnt--;
        }
        if(cnt>mx)
            mx=cnt;
        //cout<<mp[a]<<" "<<a<<" "<<cnt<<endl;
    }
    cout<<mx<<endl;
}
