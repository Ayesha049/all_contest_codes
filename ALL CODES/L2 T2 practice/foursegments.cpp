#include<iostream>
#include<math.h>
using namespace std;

int isequal(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    if(x1-x2==0)
    {
        if(x3-x4==0)
            return 1;
        return 0;
    }
    else
    {
        int xx=(y1-y2)/(x1-x2);
        int yy=(y3-y4)/(x3-x4);
        if(xx==yy)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int arr[16];
    for(int i=0; i<16; i++)
    {
        cin>>arr[i];
    }
    int f1=isequal(arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
    int f2=isequal(arr[0],arr[1],arr[2],arr[3],arr[8],arr[9],arr[10],arr[11]);
    int f3=isequal(arr[0],arr[1],arr[2],arr[3],arr[12],arr[13],arr[14],arr[15]);
    if(f1==0 && f2==0 && f3==0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
}
