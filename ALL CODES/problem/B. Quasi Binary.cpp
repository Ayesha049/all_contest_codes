/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,10,11,100,101,110,111,1000,1001,1010,1100,1101,1110,1111,10000,11000,11001,11010,11100,11101,11110,11111,10001,10010,10100,   110000,111000,111001,111010,111100,111101,111110,111111,110001,110010,110100,100000,100001,100010,100100,101000,1000000};
    int a= (sizeof(arr)/sizeof(int));

    sort(arr,arr+a);
    int n;
    cin>>n;
    vector<int>vc;
    while(n>0)
    {
        int aa=0;
        for(int i=0;i<a;i++)
        {
            if(arr[i]>n)
            {
                aa=i-1;
                break;
            }
        }
        n-=arr[aa];
        vc.push_back(arr[aa]);
    }
    cout<<vc.size()<<endl;
    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<" ";
    }
}

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    while(n>0)
    {
        int s[10];
        int aa=n;
        int i=0;
        while(aa>0)
        {
            int x=aa%10;
            aa=aa/10;
            if(x>0) s[i++]=1;
            else s[i++]=0;
        }
        int d=s[i-1];
        for(int ii=i-2;ii>=0;ii--)
        {
            d*=10;
            d+=s[ii];
        }
        n-=d;
        vc.push_back(d);

    }
    cout<<vc.size()<<endl;
    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<" ";
    }
}
