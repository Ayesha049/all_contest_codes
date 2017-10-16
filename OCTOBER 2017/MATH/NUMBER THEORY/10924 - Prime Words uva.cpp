#include<bits/stdc++.h>
using namespace std;

int pr[20001];

void seive()
{
    //pr[1]=1;
    for(int i=2;i<=20000;i++)
    {
        if(pr[i]) continue;

		for(int j=2*i;j<20000;j+=i) pr[j]=1;
    }
}

int main()
{
    seive();
    int xx=1;
    char ch='a';
    map<char,int>mpp;
    for(int i=0;i<26;i++)
    {
        mpp[ch++]=xx++;
    }
    xx=27;
    ch='A';
    for(int i=0;i<26;i++)
    {
        mpp[ch++]=xx++;
    }
    //cout<<mpp['A']<<" "<<mpp['z']<<" "<<mpp['Z'];
    string s;
    while(cin>>s)
    {
        int sum=0;
        for(int i=0;i<s.length();i++) sum+=mpp[s[i]];
        if(pr[sum]==0) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word.\n";
    }
}


