#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        string s;
        int a1,a2;
        cin>>s>>a1>>a2;
        if(a2>a1 && a1>=2400) flag=1;
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

