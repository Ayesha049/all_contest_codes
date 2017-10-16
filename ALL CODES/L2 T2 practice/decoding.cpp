#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char input[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>input[i];
    }
    if(n==1)
        cout<<input[1]<<endl;
    else
    {
        char output[n+1];
        int mid=n/2;
        if(n%2!=0)
        {
            output[mid+1]=input[1];
            int ii=0;
            for(int i=2; i<=n;)
            {
                if(i%2==0)
                {
                    output[mid-ii]=input[i++];
                }
                if(i%2==1)
                {
                    output[mid+ii+2]=input[i++];
                }
                ii++;
            }
            for(int i=1;i<=n;i++)
                cout<<output[i];
        }
        else if(n%2==0)
        {
            int ii=0;
            for(int i=1; i<=n;)
            {
                if(i%2==1)
                {
                    output[mid-ii]=input[i++];
                }
                if(i%2==0)
                {
                    output[mid+ii+1]=input[i++];
                }
                ii++;
            }
            for(int i=1;i<=n;i++)
                cout<<output[i];
        }
    }
}
