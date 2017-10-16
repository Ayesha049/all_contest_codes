#include<bits/stdc++.h>
using namespace std;

int memo[4001][4];

int cut(int *a,int len, int i)
{
    if(len==0)
        return 0;
    if(len<0)
        return -INFINITY;
    if(i<=0)
        return -INFINITY;
    if(memo[len][i]==-2)
        memo[len][i]=max((1+cut(a,len-a[i],i)),cut(a,len,i-1));
    return memo[len][i];
}

int main()
{
    for(int i=0; i<=4000; i++)
    {
        memo[i][0]=-2;
        memo[i][1]=-2;
        memo[i][2]=-2;
        memo[i][3]=-2;
    }
    int n;
    cin>>n;
    int arr[4];
    arr[0]=-INFINITY;
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cout<<cut(arr,n,3)<<endl;
}
