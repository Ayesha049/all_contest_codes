#include<iostream>
using namespace std;


int main()
{
    while(1)
    {
        long long n;
        cin>>n;
        if(n==0)
            break;
        int sum=0;
        while(sum<1 || sum>9)
        {
            sum=0;
            while(n!=0)
            {
                sum=sum+(n%10);
                n=n/10;
            }
            n=sum;
        }
        cout<<sum<<endl;
    }
}
