#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,s;
    cin>>l>>s;
    int sm[l];
    int lr[l];
    int nine=s/9;
    int rest=s%9;
    int digits=nine+1;
    if(rest==0)
        digits=nine;
    if((digits==0 && l>1) || digits>l)
    {
        cout<<"-1 "<<"-1"<<endl;
    }
    else if(digits==0 && l==1)
    {
        cout<<"0 "<<"0"<<endl;
    }

    else if(digits==l)
    {
        for(int i=0; i<l-1; i++)
        {
            lr[i]=9;
        }
        if(rest!=0)
        {
            lr[l-1]=rest;
        }
        else
            lr[l-1]=9;
        for(int i=l-1; i>=0; i--)
        {
            cout<<lr[i];
        }
        cout<<" ";
        for(int i=0; i<l; i++)
        {
            cout<<lr[i];
        }
    }

    else
    {
        for(int i=0; i<nine; i++)
        {
            lr[i]=9;
        }
        lr[nine]=rest;
        for(int i=nine+1; i<l; i++)
        {
            lr[i]=0;
        }
        for(int i=0; i<l; i++)
        {
            sm[i]=lr[l-1-i];
        }
        int pos=0;
        for(pos=0; pos<l; pos++)
        {
            if(sm[pos]>0)
                break;
        }
        sm[0]=1;
        sm[pos]=sm[pos]-1;

        for(int i=0; i<l; i++)
        {
            cout<<sm[i];
        }
        cout<<" ";
        for(int i=0; i<l; i++)
        {
            cout<<lr[i];
        }
    }
}
