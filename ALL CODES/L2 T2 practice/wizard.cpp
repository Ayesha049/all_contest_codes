#include<iostream>
using namespace std;

int main()
{
    double distance,harry_spd,voldemort_spd;
    cin>>distance>>harry_spd>>voldemort_spd;
    double xx=(harry_spd/(harry_spd+voldemort_spd));
    double ans= xx*distance;
    cout<<ans;

}
