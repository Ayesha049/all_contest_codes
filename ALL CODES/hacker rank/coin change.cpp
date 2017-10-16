#include<bits/stdc++.h>
using namespace std;

int arr[52];

int m;

long long table[52][252];
bool calculated[52][252];

long long coin_change(int n,int i)
{
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(i>=m)
        return 0;
    if(calculated[i][n] == false)
    {
        table[i][n] = coin_change(n-arr[i],i) + coin_change(n,i+1);
        calculated[i][n] = true;
    }
    return table[i][n];

}

int main()
{
    int n;
    cin>>n;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    cout<<coin_change(n,0);
}
