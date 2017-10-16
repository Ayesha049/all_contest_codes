#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,b,d,s,mx;
    cin>>b>>d>>s;

    if(b==d&&d==s){
        cout<<"0\n";
        return 0;
    }
    if(b>d&&b>s){
        cout<<2*b-d-s-2;
    }
    else if(d>b&&d>s){
        cout<<2*d-b-s-2;
    }
    else if(s>b&&s>d){
        cout<<2*s-d-b-2;
    }
    else if(b==d||d==s||s==b){
        cout<<max(b,max(d,s))-min(b,min(d,s))-1;
    }
}

