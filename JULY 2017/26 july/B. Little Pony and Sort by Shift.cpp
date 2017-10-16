#include<bits/stdc++.h>
using namespace std;

int arr[100001];
int main()
{
    int n;
    cin>>n;
    int mn=INFINITY;
    int pos;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mn=min(mn,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mn)
        {
            pos=i;
        }
    }
    int pos1=pos;
    for(int i=pos-1;i>=0;i--)
    {
        if(arr[i]==mn) pos1--;
        else break;
    }
    int flag=0;
    for(int i=1;i<n;i++)
    {
        if((pos+i)%n==pos1) break;
        if(arr[(pos+i)%n]<arr[(pos+i-1)%n])
        {
            flag=1;
            break;
        }
    }
    pos1=((n-pos)%n);
    for(int i=pos-1;i>=0;i--)
    {
        if(arr[i]==mn) pos1++;
        else break;
    }
    pos1=pos1%n;
    if(flag==1) cout<<"-1"<<endl;
    else cout<<pos1<<endl;
}

