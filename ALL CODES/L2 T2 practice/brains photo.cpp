#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char a;
            cin>>a;
            if(a=='C' || a=='M' || a=='Y')
                flag=1;
        }
    }
    if(flag==0)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
}
