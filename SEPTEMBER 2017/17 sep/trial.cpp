#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    int p;
    while(cin>>n)
    {
        p=n*10000000;
        vector < int > v;
        map<int,int> mpp;
        cin>>n;
        for(i=0; i<n; i++)
        {
            //cin>>k;
            scanf("%d",&k);
            v.push_back(k);
            mpp[k]++;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int flag=0;
        for(i=0; i<n; i++)
        {
            mpp[v[i]]--;
            if(mpp[p-v[i]]>0)
            {

                cout<<"yes "<<p-v[i]<<" "<<v[i]<<endl;
                //return 0;
                flag=1;
                break;
            }
        }
        if(flag==1) break;
        cout<<"danger"<<endl;


    }
}
