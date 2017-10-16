#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long c=a+b;
    string a1= to_string(a);
    string b1= to_string(b);
    string c1= to_string(c);
    long long aa=0,bb=0,cc=0;
    vector<char>vc;
    for(int i=0;i<a1.length();i++)
    {
        if(a1[i]!='0') vc.push_back(a1[i]);
    }
    for(int i=0;i<vc.size();i++)
    {
        aa*=10;
        aa+=(vc[i]-48);
    }

    vector<char>vc1;
    for(int i=0;i<b1.length();i++)
    {
        if(b1[i]!='0') vc1.push_back(b1[i]);
    }
    for(int i=0;i<vc1.size();i++)
    {
        bb*=10;
        bb+=(vc1[i]-48);
    }

    vector<char>vc2;
    for(int i=0;i<c1.length();i++)
    {
        if(c1[i]!='0') vc2.push_back(c1[i]);
    }
    for(int i=0;i<vc2.size();i++)
    {
        cc*=10;
        cc+=(vc2[i]-48);
    }
    if(aa+bb==cc) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


