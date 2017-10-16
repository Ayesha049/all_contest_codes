#include<bits/stdc++.h>
using namespace std;

int main()
{

    //element na thakle upperbound = lowerbound hoy;
    //distinct element hole lower bound diye index paoa jay;

    int arr[] = {1,1,1,2,3,5,6,7,8,10};
    std::vector<int> v(arr,arr+10);           // 10 20 30 30 20 10 10 20

    std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

    std::vector<int>::iterator low,up;
    low=std::lower_bound (v.begin(), v.end(),4); //          ^
    up= std::upper_bound (v.begin(), v.end(),4); //                   ^

    std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
    std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

    int it1=(low- v.begin());
    int it2=(up - v.begin());

    cout<<v[it1]<<" "<<v[it2]<<endl;

    return 0;
}

/*

*/
