#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int r=(a-c);
    int l=c-1;
    int ans= b/a;
    int sum=b%a;
    if(a==c || c==1)
        ans++;
    for(int i=1;i<a;i++)
    {
        if((i-1)<l && (i-1)<r)
        {
            sum-= 2*i-1;
        }
        else if((i-1)>=r)
        {
            sum-=r;
            sum-=i;

        }
        else if((i-1)>=l)
        {
            sum-=l;
            sum-=i;
        }
        if(sum<=0)
            break;

        ans++;

    }
    cout<<ans<<endl;
}
