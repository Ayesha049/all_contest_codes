#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[1001];
    char str[1001][1001];
    int i=0;
    int length[1001];
    int mxlen=-1;

    while(gets(a))
    {
        length[i] = strlen(a);
        if(length[i]>mxlen)
            mxlen=length[i];
        strcpy(str[i],a);
        i++;

    }

    for(int j=0; j<mxlen+2; j++)
    {
        cout<<'*';
    }
    cout<<endl;
    int flag=0;
    for(int j=0; j<i; j++)
    {
        int xx=mxlen+2;
        int z=-1;
        while(xx>length[j])
        {
            xx=xx-2;
            z++;
        }
        if(xx==length[j])
        {

            cout<<'*';
            for(int k=0; k<z; k++)
            {
                cout<<" ";
            }
            cout<<str[j];
            for(int k=0; k<z; k++)
            {
                cout<<" ";
            }
            cout<<'*'<<endl;
        }
        else
        {
            if(flag==0)
            {
                flag=1;
                cout<<'*';
                for(int k=0; k<z-1; k++)
                {
                    cout<<" ";
                }
                cout<<str[j];
                for(int k=0; k<z; k++)
                {
                    cout<<" ";
                }
                cout<<'*'<<endl;

            }
            else
            {
                flag=0;
                cout<<'*';
                for(int k=0; k<z; k++)
                {
                    cout<<" ";
                }
                cout<<str[j];
                for(int k=0; k<z-1; k++)
                {
                    cout<<" ";
                }
                cout<<'*'<<endl;
            }
        }


    }
    for(int j=0; j<mxlen+2; j++)
    {
        cout<<'*';
    }

    return 0;
}
