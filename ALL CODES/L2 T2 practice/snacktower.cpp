#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{
    int n;
    cin>>n;
    int wait[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        wait[i]=0;
    }
    int cc=n;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==cc)
        {
            cout<<cc<<" ";
            cc--;
            while(1)
            {
                if(wait[cc]==1)
                {
                    cout<<cc<<" ";
                    cc--;
                }
                if(cc==0)
                    break;
                if(wait[cc]==0)
                    break;
            }
            cout<<endl;
        }
        else
        {
            cout<<endl;
            wait[arr[i]]=1;
        }
    }

}
