#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[]= {1,2,3,4,6,12};
    while(t--)
    {
        string s;
        cin>>s;
        vector<int>ans;
        for(int i=0; i<6; i++)
        {
            int k=0;
            int f=0;
            int l=12/arr[i];
            while(1)
            {
                if(k>=l) break;
                int flag=0;
                for(int j=k; ; )
                {
                    //cout<<"j "<<j<<" "<<s[j]<<" ";
                    if(j>=12) break;
                    if(s[j]!='X')
                    {
                        flag=1;
                        break;
                    }
                    j+=l;

                }
                //cout<<endl;
                k++;
                if(flag==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1) ans.push_back(arr[i]);
        }
        cout<<ans.size()<<" ";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<"x"<<12/ans[i]<<" ";
        }
        cout<<endl;

    }
}

