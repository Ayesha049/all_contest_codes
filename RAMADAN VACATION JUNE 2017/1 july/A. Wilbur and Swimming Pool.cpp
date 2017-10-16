#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=1) cout<<"-1"<<endl;
    else if(n==2)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c || b==d) cout<<"-1"<<endl;
        else
        {
            int ans=abs(a-c);
            ans*=abs(b-d);
            cout<<ans<<endl;
        }
    }
    else if(n==3)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int ans;
        if((x1==x2 && y1==y3) || (x1==x3 && y1==y2))
        {
            int x=abs(x1-x2);
            x+=abs(x1-x3);
            int y=abs(y1-y3);
            y+=abs(y1-y2);
            ans=y*x;
        }
        else if((x2==x3 && y2==y1) || (x2==x1 && y2==y3))
        {
            int x=abs(x2-x3);
            x+=abs(x1-x2);
            int y=abs(y2-y3);
            y+=abs(y1-y2);
            ans=y*x;
        }
        else
        {
            int x=abs(x3-x2);
            x+=abs(x1-x3);
            int y=abs(y1-y3);
            y+=abs(y3-y2);
            ans=y*x;
        }
        cout<<ans<<endl;
    }
    else
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int ans,x,y;
        if(x1==x2)
        {
            x=abs(y1-y2);
            if(y1==y3)
            {
                y=abs(x1-x3);
            }
            else
            {
                y=abs(x1-x4);
            }
            ans=x*y;
        }
        else if(x1==x3)
        {
            x=abs(y1-y3);
            if(y1==y2)
            {
                y=abs(x1-x2);
            }
            else
            {
                y=abs(x1-x4);
            }
            ans=x*y;
        }
        else
        {
            x=abs(y1-y4);
            if(y1==y3)
            {
                y=abs(x1-x3);
            }
            else
            {
                y=abs(x1-x2);
            }
            ans=x*y;
        }
        cout<<ans<<endl;
    }
}

