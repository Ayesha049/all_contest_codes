#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    vector<int>vc;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        vc.push_back(a);
    }
    int f=0;
    while(1)
    {
        if(f==n) break;
        if(vc[f]==1) break;
        f++;
    }
    if(f==n) cout<<"0"<<endl;
    else
    {
        int e=n-1;
        while(1)
        {
            if(e==f) break;
            if(vc[e]==1) break;
            e--;
        }
        if(e==f) cout<<"1"<<endl;
        else
        {
            for(int i=f;i<=e;)
            {
                if(vc[i]==0)
                {
                    if(vc[i+1]==1)
                    {
                        cnt++;
                        i++;
                    }
                    else
                    {
                        while(vc[i]!=1) i++;
                    }
                }
                else
                {
                    cnt++;
                    i++;
                }
            }
            cout<<cnt<<endl;
        }

    }

}

