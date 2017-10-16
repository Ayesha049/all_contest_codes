#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<s)
        {
            /*int j=2;
            int x=a,y=b;
            while(y>0)
            {
                int xx=100-y;
                mx=max(mx,xx);
                x=a*j;
                y=b*j;
                x+=(y/100);
                y=y%100;
                j++;
                if(x>=s) break;
            }*/
            if(b>0)
            {
                int xx=100-b;
                mx=max(mx,xx);
            }
            else mx=max(mx,0);

        }
        else if(a==s)
        {
            if(b==0) mx=max(mx,0);
        }
    }
    cout<<mx<<endl;
}

