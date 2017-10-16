#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long cnt=0;
    for(int i=0; i<s.length()-1; i++)
    {
        if((s[i]-48)%4==0)
            cnt++;
        int a=s[i]-48;
        a*=10;
        a+=(s[i+1]-48);
        if(a%4==0)
            cnt+=(i+1);
    }
    if(s[s.length()-1]%4==0)
        cnt++;

    cout<<cnt<<endl;
}
