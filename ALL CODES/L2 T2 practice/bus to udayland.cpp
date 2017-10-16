#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[1001][6];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>arr[i][j];
        }
    }
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        if(arr[i][1]=='O' && arr[i][2]=='O')
        {
            arr[i][1]='+';
            arr[i][2]='+';
            flag=1;
            break;
        }
        else if(arr[i][4]=='O' && arr[i][5]=='O')
        {
            arr[i][4]='+';
            arr[i][5]='+';
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=5; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}
