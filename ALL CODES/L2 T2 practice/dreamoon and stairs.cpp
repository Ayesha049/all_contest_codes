#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    int m;
    cin>>n>>m;
    int mn=ceil(n/2);
    int step;
    if(m>n)
        cout<<"-1"<<endl;
    else
    {
        int flag=0;
        for(int i=mn;i<=n;i++)
        {
            if(i%m==0)
                {
                    flag=1;
                    step=i;
                    break;
                }
        }
        if(flag==0)
            cout<<"-1"<<endl;
        else
            cout<<step<<endl;

    }
}
