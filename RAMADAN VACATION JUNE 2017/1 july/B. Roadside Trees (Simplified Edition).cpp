#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    int cnt=0;
    cnt+=(a+1);
    int prev=a;
    for(int i=1; i<n; i++)
    {
        cin>>a;
        cnt++;
        int xx=abs(a-prev);
        cnt+=xx+1;
        prev=a;
    }
    cout<<cnt<<endl;
}

