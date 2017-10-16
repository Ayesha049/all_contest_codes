#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin>>a;
    int ans=0;

    string ss= to_string(a);

    while(1)
    {
        a++;
        ans++;
        ss=to_string(a);
        if(ss.find("8")!=-1) break;
    }
    cout<<ans<<endl;

}



