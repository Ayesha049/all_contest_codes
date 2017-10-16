#include<iostream>
using namespace std;

int main()
{
    int computers[1001];
    int arr[1001];
    int n,index;
    int direction=0;
    int found=1;
    int flag=0;
    int zzzz;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>computers[i];
        arr[computers[i]]= arr[computers[i]]+1;
        if(computers[i]==0 && arr[0]==1)
            index=i;
    }

    computers[index]=100;
    while(found!=n)
    {
         for(int i=1;i<=n;i++)
         {
             if(computers[i]<=found)
             {
                 zzzz=i;
                 found++;
                 computers[i]=100;
                 if(i<index)
                 {
                     if(flag==0)
                     {
                         flag=2;
                     }
                     else if(flag==1)
                     {
                         flag=2;
                         index=i;
                         direction++;
                     }
                 }
                 else
                 {
                     if(flag==0)
                     {
                         flag=1;
                     }
                     else if(flag==2)
                     {
                         flag=1;
                         index=i;
                         direction++;
                     }
                 }

             }
         }
         index=zzzz;
    }
    cout<<direction;



    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }*/


}
