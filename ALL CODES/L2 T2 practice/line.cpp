#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long long i=0;
    while(1)
    {
        int x=(c+b*i);
        x=x*(-1);
        if(x%a==0)
        {
            cout<<x/a<<" "<<i;
            break;
        }
        else
            i++;
        if(i>1000000000000000000)
            break;
    }
}
