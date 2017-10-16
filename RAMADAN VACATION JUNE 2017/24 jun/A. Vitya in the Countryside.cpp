#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        int a;
        cin>>a;
        if(a==0) cout<<"UP"<<endl;
        else if(a==15) cout<<"DOWN"<<endl;
        else cout<<"-1"<<endl;
    }
    else
    {
        int a;
        cin>>a;
        int flag=0;
        for(int i=1;i<n;i++)
        {
            int b;
            cin>>b;
            if(b>a) flag=1;
            else flag=0;
            a=b;
        }
        if(flag==1)
        {
            if(a==15) cout<<"DOWN"<<endl;
            else cout<<"UP"<<endl;
        }
        else
        {
            if(a==0) cout<<"UP"<<endl;
            else cout<<"DOWN"<<endl;
        }
    }
}

