#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int aa=(abs(c-a)+1)*(abs(d-b)+1);
        cnt+=aa;

    }
    cout<<cnt<<endl;
}

