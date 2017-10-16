#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
    int marr[1000];
    int m=0;
    stack<char>brc;
    char str[1000000];
    cin>>str;
    int len=strlen(str);
    int count =0,cnt=1;
    int maxx=-1;
    for(int i=0; i<len; i++)
    {
        if(str[i]=='(')
        {
            //cout<<endl<<"maxx......."<<maxx<<endl;
            brc.push(str[i]);
        }
        else
        {
            if(brc.empty())
            {
                //cout<<"i..........."<<i<<endl;
                marr[m++]=count;

                if(count>maxx)
                {
                    maxx=count;
                    cnt=1;
                    //cout<<endl<<i<<"maaaaaaaa "<<count<<endl;
                }

                count=0;
            }
            else
            {
                brc.pop();
                count++;
                //cout<<count<<" ";
                if(count>maxx)
                {
                    maxx=count;
                    cnt=1;
                }
            }
        }
    }
    int xxx=count;
    marr[m++]=count;
    if(maxx==0)
        cnt=1;
    else
    {
        if(count>maxx)
        {
            maxx=count;

        }
        cnt=0;
        for(int k=0; k<m; k++)
        {
            if(marr[k]>maxx)
            {
                maxx=marr[k];
                cnt=1;
            }
            else if(maxx==marr[k])
            {
                cnt++;
            }
        }
    }
    if(!brc.empty() && maxx>0 && maxx==xxx)
    {
        marr[m-1]=0;
        while(!brc.empty())
        {
            brc.pop();
        }
        //cout<<"yeeeeeeeeeeeeeeeeeeeeeeeeeeeessssssssssssssssss"<<endl;
        maxx=-1;
        count=0;
        for(int i=len-1; i>=0; i--)
        {
            if(str[i]==')')
            {
                //cout<<endl<<"maxx......."<<maxx<<endl;
                brc.push(str[i]);
            }
            else
            {
                if(brc.empty())
                {
                    //cout<<"i..........."<<i<<endl;
                    marr[m++]=count;
                    count=0;
                }
                else
                {
                    brc.pop();
                    count++;
                    //cout<<count<<" ";


                }
            }
        }
        marr[m++]=count;
        maxx=0;
        cnt=1;
        for(int k=0; k<m; k++)
        {
            if(marr[k]>maxx)
            {
                maxx=marr[k];
                cnt=1;
            }
            else if(maxx==marr[k])
            {
                cnt++;
            }
        }
    }

    maxx=maxx*2;
    cout<<maxx<<" "<<cnt<<endl;

}
/*


*/
