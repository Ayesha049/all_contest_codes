#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int prev;
    cin>>prev;
    if(prev==0) cnt++;
    int a;
    for(int i=1; i<n; i++)
    {
        cin>>a;
        if(a==0)
        {
            cnt++;
            prev=0;
        }
        else if(a==1 || a==2)
        {
            if(prev==a)
            {
                prev=0;
                cnt++;
            }
            else
            {
                prev=a;
            }
        }
        else
        {
            prev=3-prev;
        }

    }
    cout<<cnt<<endl;
}

