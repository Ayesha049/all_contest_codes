#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>b && x<c)
            cnt++;
    }
    cout<<cnt<<endl;
}
