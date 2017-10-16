#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(y1==y2)
    {
        int dis=max(x1,x2)-min(x1,x2);
        cout<<x1<<" "<<y1+dis<<" "<<x2<<" "<<y1+dis<<endl;
    }
    else if(x1==x2)
    {
        int dis=max(y1,y2)-min(y1,y2);
        cout<<x1+dis<<" "<<y1<<" "<<x2+dis<<" "<<y2<<endl;
    }
    else
    {
        int dis1=max(x1,x2)-min(x1,x2);
        int dis=max(y1,y2)-min(y1,y2);
        if(dis1!=dis) cout<<"-1"<<endl;
        else cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
}

