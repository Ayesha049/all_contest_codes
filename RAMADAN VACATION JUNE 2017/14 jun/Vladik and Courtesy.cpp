#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int aa=1;
    int bb=2;
    string ans;
    int flag=0;
    while(1)
    {
        if(flag==0)
        {
            if(a<aa)
            {
                ans="Vladik";
                break;
            }
            a=a-aa;
            aa+=2;
            flag=1;

        }
        else
        {
            if(b<bb)
            {
                ans="Valera";
                break;
            }
            b=b-bb;
            flag=0;
            bb+=2;

        }



    }
    cout<<ans<<endl;
}
