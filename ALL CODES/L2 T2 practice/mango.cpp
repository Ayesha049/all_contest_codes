#include<iostream>
using namespace std;

int main()
{
    int n;
    int i=0;
    while(1)
    {
        cin>>n;
        i++;
        if(n==0)
            break;
        cout<<"Case "<<i<<": "<<n/2<<endl;

    }
}
