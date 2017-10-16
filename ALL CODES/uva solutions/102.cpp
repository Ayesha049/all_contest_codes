#include<iostream>
#include<string.h>
using namespace std;

int clr(int *arr1,int *arr2,int *arr3)
{
    int x=arr1[1]+arr1[2]+arr2[0]+arr2[2]+arr3[0]+arr3[1];
    return x;
}

int main()
{
    int B[3],G[3],C[3];
    int arr[6];
    char str[4];
    while(cin>>B[0]>>G[0]>>C[0]>>B[1]>>G[1]>>C[1]>>B[2]>>G[2]>>C[2])
    {
        int mn=clr(B,C,G);
        arr[0]=mn;
        int x1=clr(B,G,C);
        arr[1]=x1;
        if(x1<mn)
            mn=x1;
        x1=clr(C,B,G);
        arr[2]=x1;
        if(x1<mn)
            mn=x1;
        x1=clr(C,G,B);
        arr[3]=x1;
        if(x1<mn)
            mn=x1;
        x1=clr(G,B,C);
        arr[4]=x1;
        if(x1<mn)
            mn=x1;
        x1=clr(G,C,B);
        arr[5]=x1;
        if(x1<mn)
            mn=x1;
        for(int i=0;i<=5;i++)
        {
            if(arr[i]==mn)
            {
                if(i==0)
                {
                    strcpy(str,"BCG");
                    break;
                }
                if(i==1)
                {
                    strcpy(str,"BGC");
                    break;
                }
                if(i==2)
                {
                    strcpy(str,"CBG");
                    break;
                }
                if(i==3)
                {
                    strcpy(str,"CGB");
                    break;
                }
                if(i==4)
                {
                    strcpy(str,"GBC");
                    break;
                }
                if(i==5)
                {
                    strcpy(str,"GCB");
                    break;
                }
            }
        }
        cout<<str<<" "<<mn<<endl;

    }
}
