#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mx=0;
    string ss;
    cin>>ss;
    int l=ss.length();
    for(int i=0; i<l; i++)
    {

        for(int j=0; j<l; j++)
        {
            string s=ss;
            char str[101];
            int xx=0;
            for(int k=j; k<=j+i; k++)
            {
                str[xx++]=s[k];
                s[j]='*';

            }
            str[xx]='\0';
            //cout<<str<<" "<<s<<endl;
            if(s.find(str)!=-1)
            {
                if(strlen(str)>mx)
                    mx=strlen(str);
            }
        }

    }
    cout<<mx<<endl;

}
