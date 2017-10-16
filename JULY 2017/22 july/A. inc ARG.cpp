#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=1;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            flag=1;
            break;
        }
        else cnt++;
    }
    if(flag==0) cout<<n<<endl;
    else cout<<cnt<<endl;
}
