#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a>h)
            cnt+=2;
        else
            cnt++;
    }
    cout<<cnt<<endl;
}
