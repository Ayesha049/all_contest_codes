#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926535897932384


int main()
{
    int test;
    int xx;
    cin>>test;
    xx=0;
    while(test--)
    {
        xx++;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        string arr[101];
        int t;
        cin>>t;
        int tt=t;
        while(t--)
        {
            int a,b;
            cin>>a>>b;
            if(a>x1 && a<x2 && b>y1 && b<y2)
                arr[t]="Yes";
            else
                arr[t]="No";

        }
        cout<<"Case "<<xx<<":"<<endl;
        while(tt--)
            cout<<arr[tt]<<endl;

    }
}

