#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    int i=1;
    int mx=0;
    int cnt=0;
    while(i<=n)
    {
        string s;
        cin>>s;
        if(s.find("0")!=-1) cnt++;
        else cnt=0;
        mx=max(mx,cnt);
        i++;

    }
    cout<<mx<<endl;
}

