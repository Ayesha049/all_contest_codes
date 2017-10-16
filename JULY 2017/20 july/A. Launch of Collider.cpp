#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>vc;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        vc.push_back(a);
    }
    int ans=-1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            if(ans==-1)
            {
                ans=(vc[i+1]-vc[i])/2;
            }
            else
            {
                ans=min(ans,((vc[i+1]-vc[i])/2));
            }
        }
    }
    cout<<ans<<endl;
}

