#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1[4];
        string s2[4];
        for(int i=0;i<4;i++)
        {
            cin>>s1[i];
        }
        for(int i=0;i<4;i++)
        {
            cin>>s2[i];
        }
        int cnt=0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(s1[i]==s2[j])
                {
                    cnt++;
                    s2[j]="123";
                }
            }
        }
        if(cnt>=2)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;
    }
}
