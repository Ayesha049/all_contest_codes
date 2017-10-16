#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c;
    int f1,f2,s1,s2,t1,t2;
    cin>>f1>>f2>>s1>>s2>>t1>>t2;
    int sum1=f1+s1+t1;
    a=f1;
    b=s1;
    c=t1;
    n-=sum1;
    //cout<<n<<endl;
    if(n>0)
    {
        f2=f2-f1;
        if(f2<n)
        {
            a+=f2;
            s2=s2-s1;
            n-=f2;
            if(s2<n)
            {
                b+=s2;
                t2=t2-t1;
                n-=s2;
                if(t2<n) c+=t2;
                else c+=n;
            }
            else b+=n;
        }
        else a+=n;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}

