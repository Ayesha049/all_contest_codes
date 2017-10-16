#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long ice;
    cin>>n>>ice;

    int kid=0;
    for(int i=0;i<n;i++)
    {
        char c;
        long long a;
        cin>>c>>a;
        if(c=='+') ice+=a;
        else
        {
            if(a<=ice)
                ice-=a;
            else
                kid++;

        }
    }
    cout<<ice<<" "<<kid<<endl;
}
