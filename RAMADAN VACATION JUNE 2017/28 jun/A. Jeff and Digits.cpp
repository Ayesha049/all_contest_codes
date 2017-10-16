#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int f=0;
    int z=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==5) f++;
        else z++;
    }
    if(z==0) cout<<"-1"<<endl;
    else if(f<9) cout<<"0"<<endl;
    else
    {
        while(f>=9)
        {
            cout<<"555555555";
            f-=9;
        }
        for(int i=1;i<=z;i++) cout<<"0";
    }
}

