#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    for(int i=0;i<8;i++)
    {
        string s;
        cin>>s;
        if(s!="WBWBWBWB" && s!="BWBWBWBW")
        {
            flag=1;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
