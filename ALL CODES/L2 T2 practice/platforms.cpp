#include<bits/stdc++.h>
using namespace std;
unsigned long long arr[2000001];
int main()
{
    int n,d,m,l;
    cin>>n>>d>>m>>l;
    int mee=1;
    for(int i=1;i<=2*n;i+=2)
    {
        arr[i]=(mee-1)*m;
        arr[i+1]=(mee-1)*m+l;
        //cout<<arr[i]<<" "<<arr[i+1]<<endl;   //228385 744978 699604 157872 //5 744978 699604 157872
        mee++;
    }
    cout<<arr[2]<<" "<<arr[3]<<endl;
    long long xx=0;
    while(xx<=arr[2*n])
    {
        xx+=d;
        for(int i=1;i<=2*n-2;i+=2)
        {
            if(arr[i+1]<xx && arr[i+2]>xx)
            {
                d=-5;
                break;
            }
            if(d==-5)
                break;

        }
        if(d==-5)
            break;
    }
    cout<<xx<<endl;
}
