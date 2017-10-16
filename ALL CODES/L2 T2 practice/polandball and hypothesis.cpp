#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<"3"<<endl;
    else if(n%2==1)
        cout<<"1"<<endl;
    else
    {
        long long a;
        for(int i=1;;i++)
        {
            a=n*i+1;
            int flag=0;
            for(int j=2;j*j<=a;j++)
            {
                if(a%j==0)
                {
                    flag=1;
                    cout<<i<<endl;
                    break;
                }
            }
            if(flag==1)
                break;
        }
    }
}
