#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[11];
    cin>>arr;
    if(arr[0]!='-')
        cout<<arr<<endl;
    else
    {
        int n=strlen(arr);
        if(arr[n-1]>arr[n-2])
        {
            arr[n-1]='\0';
        }
        else
        {
            arr[n-2]=arr[n-1];
            arr[n-1]='\0';
        }
        if(n==3 && arr[1]=='0')
        {
            cout<<"0"<<endl;
        }
        else
            cout<<arr<<endl;
    }
}
