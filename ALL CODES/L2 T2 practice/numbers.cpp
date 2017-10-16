#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int count=0;

void add(int n,int base)
{
    if(n==0)
        return;
    else
    {
        count+=n%base;
        add(n/base,base);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        add(n,i);
    }
    int x= gcd(count,n-2);
    count=count/x;
    n=(n-2)/x;
    cout<<count<<"/"<<n<<endl;

}
