#include<bits/stdc++.h>
using namespace std;

int arr[26];
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(a>='A' && a<='Z')
        {
            arr[(int)a-65]=1;
        }
        else
            arr[(int)a-97]=1;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
       if(arr[i]!=1)
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
