#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[101];
        cin>>s;
        int i;
        int flag=0;
        for( i=strlen(s)-1; i>0; i--)
        {
            if(s[i]>s[i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"no answer"<<endl;
        }
        else
        {
            i--;
            int imbig=i+1;
            int mn=(s[i+1]-s[i]);
            for(int j=i+1; j<strlen(s); j++)
            {
                if((s[j]-s[i])>0 && (s[j]-s[i])<mn)
                {
                    mn=s[j]-s[i];
                    imbig=j;
                }
                if(s[j]<s[i])
                    break;
            }
            char temp=s[imbig];
            s[imbig]=s[i];
            s[i]=temp;
            i++;
            sort(s+i,s+strlen(s));
            cout<<s<<endl;
        }
    }
}
