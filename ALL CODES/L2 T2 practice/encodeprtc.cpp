#include<iostream>
using namespace std;


int main()
{
    int vf,vs,i;
    int n;
    char s[10];
    cin>>n;
    vf=n;
    vs=0;
    i=0;
    while(vf>0)
    {
        vf=vf-1;
        vs=vf%26;
        vf=vf/26;
        s[i++]=(char)(65+vs);
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<s[j];
    }
}
