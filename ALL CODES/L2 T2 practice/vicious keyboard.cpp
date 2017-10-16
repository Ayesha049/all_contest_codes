#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string temp=s;

    string vv="k";

    vv="VK";
    temp=s;
    int cnt=0;

    while(temp.find(vv)!=-1)
    {
        int n=temp.find(vv);
        cnt++;
        temp[n]='*';
        temp[n+1]='*';
    }
    int flag=0;
    string temp1=temp;
    cout<<temp<<endl;
    vv="V";
    while(temp.find(vv)!=-1)
    {


        if(temp.find(vv)!=(s.length()-1))
        {
            if(temp[temp.find(vv)+1]!='*')
            {
                cnt++;
                flag=1;
                break;

            }
        }
        temp[temp.find(vv)]='*';

    }
    if(flag==0)
    {
        string vv="K";
        temp=temp1;
        while(temp.find(vv)!=-1)
        {


            if(temp.find(vv)!=0)
            {
                if(temp[temp.find(vv)-1]!='*')
                {
                    cnt++;
                    flag=1;
                    break;

                }
            }
            temp[temp.find(vv)]='#';

        }
    }
    cout<<cnt<<endl;
}
