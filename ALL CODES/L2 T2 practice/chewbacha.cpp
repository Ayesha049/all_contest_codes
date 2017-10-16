#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[19];
    cin>>arr;
    int l=strlen(arr);
    if(arr[0]>='5' && arr[0]<'9')
    {
            char a='9'-arr[0];
            a+='0';
            arr[0]=a;
    }
    for(int i=1;i<l;i++)
    {
        if(arr[i]>'4')
        {
            char a='9'-arr[i];
            a+='0';
            arr[i]=a;
        }
    }
    cout<<arr<<endl;
}
