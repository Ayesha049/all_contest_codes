#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6];
    map<int,int>mp;
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    /*int l=-1;
    for(int i=0; i<6; i++)
    {
        if(mp[arr[i]]>=4) l=arr[i];
    }
    if(l==-1) cout<<"Alien"<<endl;
    else
    {
        int flag=-1;
        int a[2];
        int xx=0;
        if(mp[l]==5) a[xx++]=l;
        else if(mp[l==6]) flag=0;
        if(flag==-1)
        {
            for(int i=0; i<6; i++)
                if(arr[i]!=l) a[xx++]=arr[i];
            if(a[0]==a[1]) {flag=0;}
            else flag=1;
        }
        if(flag==1) cout<<"Bear"<<endl;
        else cout<<"Elephant"<<endl;
    }*/

    vector<int>vc;
    map<int,int>m;
    for(int i=0;i<6;i++)
    {
        if(m[mp[arr[i]]]==0) vc.push_back(mp[arr[i]]);
        m[mp[arr[i]]]++;
    }

    if(vc[0]==6) cout<<"Elephant"<<endl;
    else if(vc.size()==2)
    {
        sort(vc.begin(),vc.end());
        if(vc[0]==2 && vc[1]==4) cout<<"Elephant"<<endl;
        else if(vc[0]==1 && vc[1]>=4) cout<<"Bear"<<endl;
        else cout<<"Alien"<<endl;
    }
    else cout<<"Alien"<<endl;


}

