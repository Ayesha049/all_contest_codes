#include <bits/stdc++.h>
using namespace std;

int n,t,k,d;

int main()
{
    cin>>n>>t>>k>>d;
    int time1=(n/k+(n%k>0))*t;
    int time2=time1-1;
    int Count=time2/t*k+(time2-d)/t*k;
    if(Count>=n)
        cout<<"YES";
    else
        cout<<"NO";
}
