#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    int x;
    cin>>x;
    if(x>=5)
    {
        cnt+=x/5;
        x=x%5;
    }
    if(x==4)
    {
        cnt+=x/4;
        x=x%4;
    }
    if(x==3)
    {
        cnt+=x/3;
        x=x%3;
    }
    if(x==2)
    {
        cnt+=x/2;
        x=x%2;
    }
    if(x==1)
    {
        cnt++;
    }
    cout<<cnt<<endl;
}
