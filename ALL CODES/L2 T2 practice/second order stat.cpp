#include<bits/stdc++.h>
using namespace std;
int arr[201];

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        a=a+100;
        arr[a]=1;
    }
    int flag=0;
    for(int i=0; i<=200; i++)
    {
        if(flag==1)
        {
            if(arr[i]==1)
            {
                cout<<(i-100)<<endl;
                flag=0;
                break;
            }

        }
        if(arr[i]==1)
            flag=1;
    }
    if(flag==1)
        cout<<"NO"<<endl;


}
