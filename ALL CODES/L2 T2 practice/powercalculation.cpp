#include<iostream>
using namespace std;

int main()
{
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    int w=0;
    int t=0;
    for(int i=1;i<=n;i++)
    {
        int l,r,x;
        cin>>l>>r;

        w=w+(r-l)*p1;
        if(i>1)
        {
            int diff=l-x;
            if(diff>t1)
            {
                t=t+p1*t1;
                diff=diff-t1;
                if(diff>t2)
                {
                    t=t+t2*p2;
                    diff=diff-t2;
                    t=t+diff*p3;
                }
                else
                {
                    t=t+diff*p2;
                }
            }
            else
            {
                t=t+diff*p1;
            }
        }
        x=r;

    }
    w=w+t;
    cout<<w<<endl;
}
