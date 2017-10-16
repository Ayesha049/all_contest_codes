#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout<<"  ";
        }
        for(int j=0; j<=(i-1); j++)
        {
            cout<<j<<" ";
        }
        if(i==0)
            cout<<"0"<<endl;
        else
        {
            cout<<i<<" ";
            for(int j=0; j<(i-1); j++)
            {
                cout<<i-j-1<<" ";
            }
            cout<<"0"<<endl;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout<<"  ";
        }
        for(int j=0; j<=(i-1); j++)
        {
            cout<<j<<" ";
        }
        if(i==0)
            cout<<"0"<<endl;
        else
        {
            cout<<i<<" ";
            for(int j=0; j<(i-1); j++)
            {
                cout<<i-j-1<<" ";
            }
            cout<<"0"<<endl;
        }
    }
}
