#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ind[1001];
    int arr[1001][2];
    for(int i=1;i<=1000;i++)
    {
        int cnt=1;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
                cnt++;
        }
        ind[i]=cnt;
        arr[i][0]=cnt;
        arr[i][1]=i;
        //cout<<"iiiiiiiiiiiiiiiiiiiiiii    "<<i<<endl;
        //cout<<arr[i][1]<<" "<<arr[i][0]<<endl;
    }
    //for(int i=1;i<=1000;i++)
    //{
       //cout<<arr[i][1]<<" "<<arr[i][0]<<endl;
    //}
    //cout<<endl<<endl<<endl;
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000-i;j++)
        {
            if(arr[j+1][0]>arr[j][0])
            {
                int tmp=arr[j][0];
                arr[j][0]=arr[j+1][0];
                arr[j+1][0]=tmp;

                tmp=arr[j][1];
                arr[j][1]=arr[j+1][1];
                arr[j+1][1]=tmp;

            }

        }
    }
    /*for(int i=1;i<=100;i++)
    {
       cout<<arr[i][1]<<" "<<arr[i][0]<<endl;
    }*/

    int test;
    cin>>test;
    int ii=0;
    while(test--)
    {
        ii++;
        int xxx;
        cin>>xxx;
        int num=ind[xxx];
        int p1,p2,p3;
        for(int i=1;i<=1000;i++)
        {
            if(arr[i][0]==num)
            {
                p1=i;
                for(int j=i;j<=1000;j++)
                {
                    if(arr[j][1]==xxx)
                        p2=j;
                    if(arr[j][0]<num)
                    {
                        p3=j-1;
                        break;
                    }
                }
                break;
            }
        }
        int ans=p3-(p2-p1);
        cout<<"yeeeeeeeeeeeyeeeeeee ans      "<<ans<<endl;

    }

}
