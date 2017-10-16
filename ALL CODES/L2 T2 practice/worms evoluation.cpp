#include<bits/stdc++.h>
using namespace std;


int arr[1000];
int main()
{
    int n;
    cin>>n;
    int in[n];
    for(int i=0; i<n; i++)
    {
        cin>>in[i];
        arr[in[i]]++;
    }

    int a,b=-1,c=-1;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(in[i]+in[j]<=1000)
            {
                if(arr[in[i]+in[j]]!=0)
                {
                    //cout<<in[i]<<" "<<in[j]<<endl;
                    b=i;
                    c=j;
                    break;
                }
            }
        }
    }
    if(b==-1 && c==-1)
        cout<<"-1"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(in[i]==in[c]+in[b])
            {
                a=i;
                break;
            }
        }

        cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
    }

}
