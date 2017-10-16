#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    if(n<10000)
    {
        for(int i=1; i<=n; i++)
        {
            int a=i;
            int flag=0;
            while(a!=0)
            {
                int c=a%10;
                a=a/10;

                if(c!=7 && c!=4)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    else if(n>=10000 && n<100000)
    {
        cnt+=30;
        for(int i=10000; i<=n; i++)
        {
            int a=i;
            int flag=0;
            while(a!=0)
            {
                int c=a%10;
                a=a/10;

                if(c!=7 && c!=4)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    else if(n>=100000 && n<1000000)
    {
        cnt+=62;
        for(int i=100000; i<=n; i++)
        {
            int a=i;
            int flag=0;
            while(a!=0)
            {
                int c=a%10;
                a=a/10;

                if(c!=7 && c!=4)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    else if(n>=1000000 && n<10000000)
    {
        cnt+=126;
        for(int i=1000000; i<=n; i++)
        {
            int a=i;
            int flag=0;
            while(a!=0)
            {
                int c=a%10;
                a=a/10;

                if(c!=7 && c!=4)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    else if(n>=10000000 && n<444444444)
    {
        cnt+=254;
        for(int i=10000000; i<=n; i++)
        {
            int a=i;
            int flag=0;
            while(a!=0)
            {
                int c=a%10;
                a=a/10;

                if(c!=7 && c!=4)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    else
    {
        cnt+=510;
        for(int i=444444444; i<=n; i++)
        {
            int a=i;
            int flag=0;
            while(a!=0)
            {
                int c=a%10;
                a=a/10;

                if(c!=7 && c!=4)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    cout<<cnt<<endl;
}
