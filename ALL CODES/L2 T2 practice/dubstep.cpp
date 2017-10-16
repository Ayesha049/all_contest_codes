#include<bits/stdc++.h>
using namespace std;

int dub(char *str)
{
    if(str[0]=='W')
    {
        if(str[1]=='U')
        {
            if(str[2]=='B')
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    char str[201];
    cin>>str;
    string arr[201];
    char s[201];
    int i=0;
    int cnt=0;
    int flag=0;
    //while(strlen(str)>=3)
    while(1)
    {
        //cout<<str<<endl;
        string ss=str;

        if(ss.find("WUB")==string::npos)
            break;

        if(dub(str)==0)
        {
            s[i++]=str[0];
            strcpy(str,str+1);
        }
        else
        {
            if(i!=0)
            {
                s[i]='\0';
                arr[cnt++]=s;
                i=0;
            }
            strcpy(str,str+3);
        }
    }

    if(strlen(str)!=0)
    {
        arr[cnt++]=str;
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/*
WUBWUBWUBSR
*/
