#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string s;
    cin>>k>>s;
    sort(s.begin(),s.end());
    int sum=0;
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        int a= s[i]-48;
        sum+=a;
    }
    int i=0;
    while(sum<k)
    {
        int a= s[i]-48;
        i++;
        sum+=(9-a);
        cnt++;
    }
    cout<<cnt<<endl;
}

