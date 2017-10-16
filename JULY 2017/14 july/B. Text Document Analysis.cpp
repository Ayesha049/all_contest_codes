#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int mx=0;
    int p=0;
    for(int i=0; i<n;)
    {
        if(p==0)
        {
            int xx=0;
            while(s[i]!='(' && s[i]!='_')
            {

                if(i==n) break;
                i++;
                xx++;
            }
            mx=max(mx,xx);
            if(s[i]=='(') p=1;
            i++;

        }
        if(p==1)
        {
            int xx=0;
            while(s[i]!=')')
            {

                if(i==n) break;
                if(s[i]=='_')
                {
                    if(xx!=0) cnt++;
                    xx=0;
                }
                else xx++;
                i++;
            }
            if(xx!=0)cnt++;
            p=0;
            i++;

        }
    }
    cout<<mx<<" "<<cnt<<endl;
}

