#include <bits/stdc++.h>

using namespace std;

string  first[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"},
        second[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

int n;

int main()
{
    cin >> n;
    if(n < 20)
        cout << first[n];
    else
    {
        cout << second[n/10-2] ;
        if(n%10!=0)
           cout << "-" << first[n%10];
    }
        return 0;
}
