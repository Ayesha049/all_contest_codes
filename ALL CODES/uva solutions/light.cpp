#include<bits/stdc++.h>
using namespace std;

long long arr[100000];


int main()
{
    arr[1]=1;
    arr[2]=2;
    arr[3]=2;
    for(long long i=4;i<10000;i++)
    {
        long long cnt=2;
        for(long long j=2; j<i; j++)
        {
            if(i%j==0)
                cnt++;
        }
        arr[i]=cnt;
    }
    long long num;
    while(1)
    {
        cin>>num;
        if(num==0)
            break;

        if(arr[num]%2==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
}
