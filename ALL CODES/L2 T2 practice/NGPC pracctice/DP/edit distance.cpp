#include<bits/stdc++.h>
using namespace std;

int memo[101][101];

string s1,s2;

int mn(int x,int y,int z)
{
    int xx=min(x,y);
    return min(xx,z);
}

int change(int m,int n)
{
    if(m==0)
        return n;
    if(n==0)
        return m;
    if(memo[m][n]==0)
    {
        if(s1[m-1]==s2[n-1] )
            memo[m][n]= change(m-1,n-1);
        else
            memo[m][n]= 1+mn(change(m-1,n-1),change(m-1,n),change(m,n-1));
    }
    return memo[m][n];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cin>>s1>>s2;
        cout<<change(s1.length(),s2.length());
    }
}
