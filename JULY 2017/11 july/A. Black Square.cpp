#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        int a=s[i]-48;
        cnt+=arr[a];
    }
    cout<<cnt<<endl;
}

