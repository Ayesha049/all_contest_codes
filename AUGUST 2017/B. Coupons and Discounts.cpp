#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        vc.push_back(a);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(vc[i]%2==1)
        {
            if(i==(n-1))
            {
                flag=1;
                break;
            }
            else
            {
                if(vc[i+1]==0)
                {
                    flag=1;
                    break;
                }
                else vc[i+1]--;
            }
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

