#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    long long n,m,k,x;
    cin>>n>>m>>k>>x;
    cin>>ss;
    string inputs[m];
    for(int i=0; i<m; i++)
    {
        char arr[k+1];
        cin>>arr;
        sort(arr,arr+k);
        inputs[i]=arr;
        //cout<<inputs[i];
    }
    stack<int>st;
    long long var=k;
    long long v2=1;
    for(int i=1; i<=m; i++)
    {
        int a=x%var;
        if(a==0)
            a=k;
        else
        {
            if((a/v2)*v2!=a)
                a=(a/v2)+1;
            else
                a=a/v2;
        }
        st.push(a);
        var*=k;
        v2*=k;
        //cout<<a1<<endl;
    }
    int cnt=0;
    for(int i=0; i<ss.length(); i++)
    {
        if(ss[i]=='#')
        {
            int dd=st.top();
            st.pop();
            ss[i]=inputs[cnt++][dd-1];
        }
    }
    cout<<ss<<endl;
}
