#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans;
    int n=s.length();
    int flag=0;
    for(int i=0; i<n; i++)
    {
        int a=(int)s[i]-48;
        if(a%8==0)
        {
            ans=a;
            flag=1;
            break;
        }
        for(int j=i+1; j<n; j++)
        {
            a=(int)s[i]-48;
            int b=(int)s[j]-48;
            a*=10;
            a+=b;
            if(a%8==0)
            {
                ans=a;
                flag=1;
                break;
            }
            for(int k=j+1; k<n; k++)
            {
                a=(int)s[i]-48;
                b=(int)s[j]-48;
                int c=(int)s[k]-48;
                a*=10;
                a+=b;
                a*=10;
                a+=c;
                if(a%8==0)
                {
                    ans=a;
                    flag=1;
                    break;
                }

            }
            if(flag==1)
                break;
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
}
