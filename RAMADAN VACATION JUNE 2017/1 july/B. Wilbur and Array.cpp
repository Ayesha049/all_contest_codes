#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long cnt=0;
    long long a;
    long long prev=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%I64d",&a);
        cnt+=abs(prev-a);
        prev=a;
    }
    cout<<cnt<<endl;

}

