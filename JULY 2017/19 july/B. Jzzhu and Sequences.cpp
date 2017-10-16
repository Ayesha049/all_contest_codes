#include<bits/stdc++.h>
using namespace std;

const int M=1000000007;
int a[6];

int main()
{
    int x,y,n;
    cin>>x>>y>>n;

    a[1]=(x+M)%M;
    a[2]=(y+M)%M;
    a[3]=(a[2]-a[1]+M)%M;
    a[4]=(-x+M)%M;
    a[5]=(-y+M)%M;
    a[0]=(a[1]-a[2]+M)%M;
    cout<<(a[n%6]+M)%M<<endl;

}

