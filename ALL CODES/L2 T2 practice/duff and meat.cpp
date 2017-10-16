#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int cost=0;
    int meat,price;
    cin>>meat>>price;
    for(int i=1;i<n;i++)
    {
        int m,p;
        cin>>m>>p;
        if(p<price)
        {
            cost+=(meat*price);
            meat=m;
            price=p;
        }
        else
        {
            meat+=m;
        }
    }
    cost+=(meat*price);
    cout<<cost<<endl;
}
