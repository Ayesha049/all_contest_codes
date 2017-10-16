#include<iostream>
#include<string.h>
using namespace std;

int subcheck(char *s1, char*s2)
{
    int l1=strlen(s1);
    int l2=strlen(s2);
    int j,x=-1;
    if(l2<=l1)
    {
        for(int i=0; i<l1; i++)
        {
            for(j=0; j<l2; j++)
            {
                if(s1[i+j]!=s2[j])
                {
                    break;
                }
            }
            if(j==l2)
            {
                x=i;
                break;
            }

        }
    }
    return x;
}

int subcheck2(char *s1, char*s2)
{
    int l1=strlen(s1);
    int l2=strlen(s2);
    int j,x=-1;
    if(l2<=l1)
    {
        for(int i=l1-1; i>=0; i--)
        {
            for(j=0; j<l2; j++)
            {
                if(s1[i-j]!=s2[j])
                {
                    break;
                }
            }
            if(j==l2)
            {
                x=i;
                break;
            }

        }
    }
    return x;
}


int main()
{
    char s1[100001];
    char s2[101];
    char s3[101];
    char tmp[101];
    int f1=0;
    int f2=0;
    int f3=0;
    int f4=0;
    cin>>s1>>s2>>s3;
    int l1=strlen(s1);
    int l2=strlen(s2);
    int l3=strlen(s3);
    if(l2+l3>l1)
        cout<<"fantasy"<<endl;
    else
    {
        int x=subcheck(s1,s2);
        int y=subcheck(s1+x,s3);
        int z=subcheck(s1,s3);
        //cout<<x<<y<<endl;
        if(x==-1 || z==-1)
        {
            f3=1;
        }
        else if(x!=-1 && y!=-1)
        {
            f1=1;
        }
        //cout<<f1<<f2<<f3;

        //cout<<s1;
        x=subcheck2(s1,s2);
        z=subcheck2(s1,s3);
        if(x==-1 || z==-1)
            f4=1;
        s1[x]='\0';
        y=subcheck2(s1,s3);

        //cout<<x<<y;
        if(x!=-1 && y!=-1)
        {
            f2=1;
        }
        if(f3==1 && f4==1)
        {
            cout<<"fantasy"<<endl;
        }

        else if(f1==1)
        {
            if(f2==1)
            {
                cout<<"both"<<endl;
            }
            else
            {
                cout<<"forward"<<endl;
            }
        }
        else if(f2==1)
        {
            cout<<"backward"<<endl;
        }
        else if(f1==0 && f2==0)
        {
            cout<<"fantasy"<<endl;
        }
    }



}
