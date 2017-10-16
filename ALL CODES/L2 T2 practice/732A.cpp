#include<iostream>
using namespace std;

int main()
{
    int count=1;
    int svl_price, r;
    cin>>svl_price>>r;
    while(1)
    {
        if(((svl_price*count)%10)==0)
            break;
        else if(((svl_price*count)-r)%10==0)
            break;
        else
            count++;

    }
    cout<<count;


}
