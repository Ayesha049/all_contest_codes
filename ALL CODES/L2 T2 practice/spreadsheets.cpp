#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;


void decode(char s[])
{
    //char s[10];
    //cin>>s;
    int l=strlen(s);
    int a,b,x,sum;
    x=1;
    sum=0;
    for(int i=l-1;i>=0;i--)
    {
        a= (int)(s[i]-64);
        b=x*a;
        x=x*26;
        sum=sum+b;
    }
    cout<<sum;
}

void encode(int n)
{
    int vf,vs,i;
    //int n;
    char s[10];
    //cin>>n;
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


int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        test--;
        char s[1000];
        cin>>s;
        int row,colum;

        if(sscanf(s,"%*c%d%*c%d",&row,&colum)==2)
        {
            encode(colum);
            cout<<row<<endl;


        }
        else
        {
            char str[1000];
            int i=0;
            while(s[i]<'0'||s[i]>'9')
            {
                str[i]=s[i];
                i++;
            }
            str[i]='\0';
            cout<<'R';
            for(int j=i;j<strlen(s);j++)
            {
                cout<<s[j];
            }
            cout<<'C';
            decode(str);

            cout<<endl;
        }

    }


}
