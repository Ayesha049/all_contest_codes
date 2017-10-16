#include<bits/stdc++.h>
using namespace std;

double arr[1000002];
int main()
{

    //arr[0]=0;
    for(int i=1;i<1000002;i++)
    {
        arr[i]=arr[i-1]+log10(i);
    }
    /*for(int i=1;i<20;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    //cout<<endl;
    int test;
    cin>>test;
    int xx=0;
    while(test--)
    {
        xx++;
        int a,b;
        cin>>a>>b;
        //cout<<arr[a]<<" "<<log10(b)<<endl;
        long long ans=floor((arr[a])/(log10(b)))+1;
        cout<<"Case "<<xx<<": "<<ans<<endl;
    }

    return 0;
}
