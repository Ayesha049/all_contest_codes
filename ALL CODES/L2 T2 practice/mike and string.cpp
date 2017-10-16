#include<bits/stdc++.h>
using namespace std;
string arr[51];
int ans[51];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int flag=0;

    for(int i=0; i<n; i++)
    {
        string s=arr[i];
        int cnt=0;

        for(int j=0; j<n; j++)
        {
            int flag=0;
            if(arr[j]==s)
            {
                flag=1;
            }
            else
            {
                string ss=arr[j];
                for(int k=0; k<s.length(); k++)
                {
                    cnt++;
                    char temp=ss[0];
                    for(int l=0; l<(s.length()-1); l++)
                    {
                        ss[l]=ss[l+1];
                    }
                    ss[s.length()-1]=temp;
                    //cout<<endl<<ss<<endl;
                    if(ss==s)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                cnt=-1;
                break;
            }

        }
        if(cnt==-1)
        {
            ans[i]=-1;
            break;
        }
        else
            ans[i]=cnt;

    }
    sort(ans,ans+n);
    //for(int i=0;i<n;i++)
    //cout<<ans[i]<<" ";
    cout<<ans[0]<<endl;
}
