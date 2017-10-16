#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
        cout<<"-1"<<endl;
    else
    {
        int cntt=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<cntt<<" ";
                cntt++;
            }
            cout<<endl;
        }
    }
}
