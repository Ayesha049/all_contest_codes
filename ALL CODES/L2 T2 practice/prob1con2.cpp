#include<iostream>
using namespace std;

int diff(int a,int b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}

int main()
{
    int n,k;
    int g,t;
    char arr[101];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]=='G')
            g=i;
        if(arr[i]=='T')
            t=i;
    }
    if(diff(g,t)%k!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(g<t)
        {
            while(g!=t)
            {
                g=g+k;
                if(arr[g]=='#')
                    break;
            }
            if(g==t)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            while(g!=t)
            {
                g=g-k;
                if(arr[g]=='#')
                    break;
            }
            if(g==t)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }

}
