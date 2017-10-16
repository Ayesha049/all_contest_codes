#include<iostream>
using namespace std;

int main()
{
    int x,y;
    int len=0;
    int wid=0;
    int m,n;
    char c;
    cin>>n>>m>>c;
    char arr[101][101];
    char mark[26];
    for(int i=0;i<26;i++)
        mark[i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==c)
            {
                x=i;
                y=j;
            }
        }
    }
    int i,j;
    i=x;
    j=y;
    //cout<<x<<y<<endl;
    while(j>=1)
    {
        //cout<<arr[x][j]<<len;
        if(arr[i][j--]==c)
            len++;
        else
        {
            break;
        }
    }
    while(i>=1)
    {
        //cout<<arr[i][y]<<wid;
        if(arr[i--][y]==c)
            wid++;
        else
            break;
    }
    //cout<<len<<wid;
    x=x-wid+1;
    y=y+1-len;
    //cout<<x<<y;
    int cnt=0;
    int a1=wid;
    int b1=len;
    int c1=wid;
    int d1=len;
    if(y>1)
    {
        //cout<<"left  ";
        for(int i=x;;i++)
        {

            //cout<<arr[i][y-1];
            if(arr[i][y-1]!='.')
            {int ch= (int)arr[i][y-1];
            ch=ch-65;
            if(mark[ch]==0)
            {
                cnt++;
                mark[ch]=1;
            }}
            a1--;
            if(a1==0)
                break;
        }
    }
    //cout<<cnt<<endl;
    a1=len;
    if(x>1)
    {
        //cout<<"up ";
        for(int i=y;;i++)
        {

            //cout<<arr[x-1][i];
            if(arr[x-1][i]!='.')
            {int ch= (int)arr[x-1][i];
            ch=ch-65;
            if(mark[ch]==0)
            {
                cnt++;
                mark[ch]=1;
            }}
            a1--;
            if(a1==0)
                break;
        }
    }
    //cout<<cnt<<endl;
    a1=len;
    if(x+wid<=n)
    {
        //cout<<"down ";
        for(int i=y;;i++)
        {

            //cout<<arr[x+wid][i];
            if(arr[x+wid][i]!='.')
            {int ch= (int)arr[x+wid][i];
            ch=ch-65;
            if(mark[ch]==0)
            {
                cnt++;
                mark[ch]=1;
            }}
            a1--;
            if(a1==0)
                break;
        }
    }
    //cout<<cnt<<endl;
    a1=wid;
    if(y+len<=m)
    {
        //cout<<"right ";
        for(int i=x;;i++)
        {

            //cout<<arr[i][y+len];
            if(arr[i][y+len]!='.')
            {int ch= (int)arr[i][y+len];
            ch=ch-65;
            //cout<<"ch"<<ch;
            if(mark[ch]==0)
            {
                cnt++;
                mark[ch]=1;
            }}
            a1--;
            if(a1==0)
                break;
        }
    }
    //cout<<endl;
    cout<<cnt<<endl;

}
/*
3 5 R
G.B..
..RR.
T.RR.
*/
