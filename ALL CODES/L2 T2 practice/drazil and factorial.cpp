#include<bits/stdc++.h>
using namespace std;

int main()
{
    char four[]={'2','2','3'};
    char five[]={'5'};
    char six[]={'3','5'};
    char seven[]={'7'};
    char eight[]={'2','2','2','7'};
    char nine[]={'7','3','3','2'};
    char ans[1000];
    int n;
    string s;
    cin>>n>>s;
    int cc=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]<='3' && s[i]>'1')
        {
            ans[cc++]=s[i];
        }
        else
        {
            if(s[i]=='4')
            {
                int a=(sizeof(four));
                for(int j=0;j<a;j++)
                {
                    ans[cc++]=four[j];
                }
            }
            else if(s[i]=='5')
            {
                int a=(sizeof(five));
                for(int j=0;j<a;j++)
                {
                    ans[cc++]=five[j];
                }
            }
            else if(s[i]=='6')
            {
                int a=(sizeof(six));
                for(int j=0;j<a;j++)
                {
                    ans[cc++]=six[j];
                }
            }
            else if(s[i]=='7')
            {
                int a=(sizeof(seven));
                for(int j=0;j<a;j++)
                {
                    ans[cc++]=seven[j];
                }
            }
            else if(s[i]=='8')
            {
                int a=(sizeof(eight));
                for(int j=0;j<a;j++)
                {
                    ans[cc++]=eight[j];
                }
            }
            else if(s[i]=='9')
            {
                int a=(sizeof(nine));
                for(int j=0;j<a;j++)
                {
                    ans[cc++]=nine[j];
                }
            }
        }
    }
    sort(ans,ans+cc);
    reverse(ans,ans+cc);
    for(int i=0;i<cc;i++)
        cout<<ans[i];
    cout<<endl;
}
