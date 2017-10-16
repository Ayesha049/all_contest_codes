#include<bits/stdc++.h>
using namespace std;

int main()
{
    int boy[100];
    int girl[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>boy[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>girl[i];
    }
    sort(boy,boy+n);
    sort(girl,girl+m);
    int b=0;
    int g=0;
    int pr=0;
    while(1)
    {
        if(b==n || g==m)
            break;
        else
        {
            if(boy[b]==girl[g] || boy[b]==(girl[g]+1) || girl[g]==(boy[b]+1))
            {
                b++;
                g++;
                pr++;
            }
            else if(boy[b]-girl[g]>1)
            {
                g++;
            }
            else if(girl[g]-boy[b]>1)
            {
                b++;
            }
        }
    }
    cout<<pr<<endl;
}
