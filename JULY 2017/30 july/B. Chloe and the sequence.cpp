#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin>>n>>k;
    int i=1;
    while(1)
    {
        if(k&1==1)
        {
            cout<<i<<endl;
            break;
        }
        else i++;
        k=k>>1;
    }
}

