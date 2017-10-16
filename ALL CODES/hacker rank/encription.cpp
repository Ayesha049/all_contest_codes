#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=s.length();
    int xx=sqrt(a);
    int b;
    if((xx*xx) == a )
        b=xx;
    else
        b=xx+1;
    if(xx*b<a)
        xx++;
    cout<<xx<<" "<<b<<endl;
    char arr[xx][b];
    int cc=0;
    for(int i=0; i<xx; i++)
    {
        for(int j=0; j<b; j++)
        {
            arr[i][j]=s[cc++];
            if(cc==a)
            {
                if(cc!=(b*xx))
                for(int k=j+1;k<b;k++)
                    arr[i][k]='*';
                break;
            }
        }
        if(cc==a)
            break;
    }


    for(int i=0; i<xx; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;

    }



    for(int i=0; i<b; i++)
    {
        for(int j=0; j<xx; j++)
        {
            if(arr[j][i]!='*')
                cout<<arr[j][i];
            else
                break;
        }
        cout<<" ";
    }
}
