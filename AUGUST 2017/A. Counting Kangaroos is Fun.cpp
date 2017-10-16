#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    int a;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        vc.push_back(a);
    }
    sort(vc.begin(),vc.end());
    int cnt=n;
    int m=n-1;
    for(int i=n/2-1; i>=0; i--)
    {
        if(vc[i]*2<=vc[m])
        {
            m--;
            cnt--;
        }
    }
    cout<<cnt<<endl;

}

