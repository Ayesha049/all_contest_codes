#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin>>s>>k;
    int l=s.length();
    if(l==k) cout<<"YES"<<endl;
    else if(l%k!=0) cout<<"NO"<<endl;
    else
    {
        int flag=0;
        int n=l/k;
        for(int i=0;i<k;i++)
        {
            int aa=n*i;
            int bb=aa+n;
            int cc=aa+(n/2);
            //cout<<aa<<" "<<bb<<" "<<cc<<endl;
            for(int j=aa;j<cc;j++)
            {
                if(s[j]!=s[bb-j-1+aa])
                {
                    //cout<<j<<" "<<bb-j-1+aa<<endl;;
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

