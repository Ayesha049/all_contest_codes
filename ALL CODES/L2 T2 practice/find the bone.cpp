#include<bits/stdc++.h>
using namespace std;

int holes[1000001];

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+1];
    for(int i=0; i<=n; i++)
    {
        arr[i]=i;
    }
    for(int i=0; i<m; i++)
    {
        int a;
        cin>>a;
        holes[a]=1;
    }
    int bone_pos=1;
    if(holes[1]==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        int flag=0;
        for(int i=0; i<k; i++)
        {
            int a,b;
            cin>>a>>b;
            int temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
            if(flag==0)
            {
                if(arr[a]==1)
                {
                    if(holes[a]==1)
                    {
                        flag=1;
                        bone_pos=a;
                    }
                }
                if(arr[b]==1)
                {
                    if(holes[b]==1)
                    {
                        flag=1;
                        bone_pos=b;
                    }
                }
            }

        }
        if(flag==0)
        {
            for(int i=0; i<=n; i++)
            {
                if(arr[i]==1)
                    bone_pos=i;
            }
        }
        cout<<bone_pos<<endl;
    }
}
