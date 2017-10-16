#include<bits/stdc++.h>
using namespace std;
long long arr[100];
int main()
{
    arr[1]=5;
    for(int i=2; i<=28; i++)
    {
        arr[i]=arr[i-1]*2;
    }
    int n,i=1;
    cin>>n;
    if(n>5)
    {
        while(n>5)
        {
            if(n<=arr[i])
            {
                //n-=arr[i];
                //cout<<n<<"lafgliefjvb "<<arr[i]<<endl;
                break;
            }
            n-=arr[i];
            //cout<<"arr[i] "<<arr[i]<<endl;
            i++;
            //cout<<n<<endl;
        }

        float ans= arr[i]/5.00;

        n=ceil(n/ans);
        //cout<<n<<" "<<ans<<endl;
    }
    if(n==1)    //"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"
    {
        cout<<"Sheldon"<<endl;
    }
    if(n==2)    //"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"
    {
        cout<<"Leonard"<<endl;
    }
    if(n==3)    //"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"
    {
        cout<<"Penny"<<endl;
    }
    if(n==4)    //"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"
    {
        cout<<"Rajesh"<<endl;
    }
    if(n==5)    //"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"
    {
        cout<<"Howard"<<endl;
    }
}
