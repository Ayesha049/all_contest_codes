#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][3];
    arr[1][0]=1;
    arr[1][1]=0;
    arr[1][2]=2;
    arr[2][0]=1;
    arr[2][1]=2;
    arr[2][2]=0;
    arr[3][0]=2;
    arr[3][1]=1;
    arr[3][2]=0;
    arr[4][0]=2;
    arr[4][1]=0;
    arr[4][2]=1;

    arr[5][0]=0;
    arr[5][1]=2;
    arr[5][2]=1;

    arr[0][0]=0;
    arr[0][1]=1;
    arr[0][2]=2;

    long long n,k;
    cin>>n>>k;
    n=n%6;
    cout<<arr[n][k]<<endl;

}
