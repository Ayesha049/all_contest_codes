#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[200];
    cin>>arr;
    if(n<=3)
        cout<<arr;
    else

    {
        if(n%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                cout<<arr[i-1];
                if(i%2==0 && i!=n)
                    cout<<"-";
            }
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                cout<<arr[i-1];
                if(i%2==0 && i!=n-1)
                    cout<<"-";
            }

        }

    }
}
