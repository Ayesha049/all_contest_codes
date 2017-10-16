#include<bits/stdc++.h>
using namespace std;

int pos[101];
int spit[101];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        pos[i]=a;
        spit[i]=a+b;
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int a=pos[i];
        int b=spit[i];
        for(int j=0;j<n;j++)
        {
            if(pos[j]==b && spit[j]==a)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

