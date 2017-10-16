#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    sum=abs(sum);
    int nn=sum/x;
    if(sum%x!=0) nn++;
    cout<<nn<<endl;
}

