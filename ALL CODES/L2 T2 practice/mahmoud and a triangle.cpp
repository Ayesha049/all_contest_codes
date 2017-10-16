#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{
    int flag=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(n>45)
        cout<<"YES"<<endl;
    else

    {
        for(int i=0; i<n; i++)
        {
            int a=arr[i];
            for(int j=i+1; j<n; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    int b=arr[j];
                    int c=arr[k];
                    int temp[]= {a,b,c};
                    sort(temp,temp+3);
                    if(temp[0]+temp[1]>temp[2])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
