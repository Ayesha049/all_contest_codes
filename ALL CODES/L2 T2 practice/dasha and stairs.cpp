#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0)
        cout<<"NO"<<endl;
    else

    {
        int ans=abs(a-b);
        if(ans==1 || ans==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
