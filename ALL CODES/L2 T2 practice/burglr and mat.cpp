#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int arr[21][2];
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            if(arr[j+1][1]>arr[j][1])
            {
                int tmp=arr[j][1];
                arr[j][1]=arr[j+1][1];
                arr[j+1][1]=tmp;

                tmp=arr[j][0];
                arr[j][0]=arr[j+1][0];
                arr[j+1][0]=tmp;

            }

        }
    }
    int i=0;
    long long cnt=0;
    while(n>0)
    {
        if(n>arr[i][0])
        {
            n=n-arr[i][0];
            cnt+=(arr[i][0]*arr[i][1]);
            i++;
        }
        else
        {
            cnt+=(n*arr[i][1]);
            n=0;
        }
        //if(i==m)
            //break;
        //cout<<cnt<<" "<<i<<"nnnnnnnnnnnnn "<<n<<endl;
        if(i==m)
            break;
    }
    cout<<cnt<<endl;


    /*for(int i=0;i<m;i++)
    {
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }*/
}
