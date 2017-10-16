#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=0; i<=10000; i++)
    {
        int b=n-(i*i);
        if(i==(m-(b*b)))
        {
            if(b>=0)
                cnt++;

        }
    }
    cout<<cnt<<endl;
}
