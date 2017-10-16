#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int s=0;
    int x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        s+=x;
        v.push_back(s);
    }

    std::vector<int>::iterator low;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&x);
        low=std::lower_bound (v.begin(), v.end(),x);
        cout <<(low- v.begin())+1 << '\n';
    }

}

