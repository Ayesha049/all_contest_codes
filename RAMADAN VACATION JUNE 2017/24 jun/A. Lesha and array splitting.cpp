#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[101];
    for(int i=0;i<n;i++) cin>>arr[i];
    int flag=0;
    vector<pair<int,int> >ans;

    int l=0,r=0;
    while(1)
    {
        if(r==n) break;
        if(arr[r]!=0)
        {
            int xx=r;
            while(1)
            {
                xx++;
                if(xx==n) break;
                if(arr[xx]!=0) break;
                r=xx;

            }
            ans.push_back(make_pair(l+1,r+1));
            flag=1;
            l=r+1;
            r++;

        }
        else
        {
            r++;
        }
    }
    if(flag==0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
}

