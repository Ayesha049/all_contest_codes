#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("C-small-practice-1.in","r",stdin);
    freopen("C-small-practice-1.out","w",stdout);
    int arr[] ={0,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987};
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int a,b,l;
        cin>>a>>b>>l;
        cout<<"Case #"<<k<<": "<<arr[l]<<endl;
    }
}
