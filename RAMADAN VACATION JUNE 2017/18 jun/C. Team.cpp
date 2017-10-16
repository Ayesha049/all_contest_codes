/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int flag=0;
    if(m==1) cout<<"-1"<<endl;
    else if(m>(2*n)+2) cout<<"-1"<<endl;
    else
    {
        int x=n+m;
        vector<char>vc;
        while(1)
        {
            if(n<=0) break;
            if(m<=2) break;
            else
            {
                n--;
                m-=2;
                vc.push_back('1');
                vc.push_back('1');
                vc.push_back('0');
            }
        }
        if(n==0)
        {
            if(m<=2)
            {
                if(m==2)
                {
                    vc.push_back('1');
                    vc.push_back('1');
                }
                else vc.push_back('1');
            }
            else flag=1;
        }
        else if(m==1 || m==2)
        {
            for(int i=1; i<=n; i++)
                vc.push_back('0');
            vc.push_back('1');
            if(m==2) vc.push_back('1');
        }
        else flag=1;
        if(flag==1) cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<x; i++) cout<<vc[i];
        }



    }
}
*/


#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<cmath>
#include<sstream>
using namespace std;
typedef unsigned long long int llu;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    //afreopen("input.txt","r",stdin);
    string ans;
    int zero,k,i,one;
    cin>>zero>>one;

    if(one+1<zero)
    {
        puts("-1");
        return 0;
    }

    if((zero+1)*2<one)
    {
        puts("-1");
        return 0;
    }
    k=min(zero,one);
    zero-=k;
    one-=k;
    if(zero>1)
    {
        ans+="0";
        zero--;
    }
    if(one>0)
    {
        ans+="1";
        one--;
    }
    for(i=0; i<k; i++)
    {
        if(one>0)
        {
            ans+="1";
            one--;
        }
        ans+="01";
    }
    if(one>0)
    {
        ans+="1";
        one--;
    }
    if(zero>0)
    {
        ans+="0";
        zero--;
    }

    if(one!=0||zero!=0)
    {
        puts("-1");
        return 0;
    }
    cout<<ans<<endl;


    return 0;
}

