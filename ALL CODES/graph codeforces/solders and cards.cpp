#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k1,k2;
    queue<int>one;
    queue<int>two;
    cin>>k1;
    for(int i=1;i<=k1;i++)
    {
        int a;
        cin>>a;
        one.push(a);
    }
    cin>>k2;

    for(int i=1;i<=k2;i++)
    {
        int a;
        cin>>a;
        two.push(a);
    }
    int flag=0;
    for(int i=1;i<=10000000;i++)
    {
        int a=one.front();
        one.pop();
        int b=two.front();
        two.pop();
        if(a>b)
        {
            one.push(b);
            one.push(a);
        }
        else
        {
            two.push(a);
            two.push(b);
        }
        if(one.empty())
        {
            flag=1;
            cout<<i<<" "<<"2"<<endl;
            break;
        }
        if(two.empty())
        {
            flag=1;
            cout<<i<<" "<<"1"<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"-1"<<endl;

}
