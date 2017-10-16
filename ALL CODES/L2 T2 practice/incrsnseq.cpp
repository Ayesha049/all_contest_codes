#include<iostream>
using namespace std;

int main()
{
    int n,r,z,cnt=0;
    cin>>n>>r;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(i>1)
        {
            if(x<=z)
            {
                z=z-x;
                z=z+1;
                int a=z%r;
                if(a==0)
                {
                   cnt+=(z/r);
                   x=x+z;
                }

                else
                {
                    cnt+=z/r+1;
                    x=x+(z/r+1)*r;
                }
            }
        }
        z=x;
        //cout<<cnt<<endl;
    }
    cout<<cnt<<endl;
}
