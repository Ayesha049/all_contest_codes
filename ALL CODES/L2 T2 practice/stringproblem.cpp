#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n;
    cin>>n;
    int arr[26][26];
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<26; j++)
            arr[i][j]=10001;
    }
    for(int i=0; i<26; i++)
        arr[i][i]=0;


    for(int i=0; i<n; i++)
    {
        char ch1,ch2;
        int x;
        cin>>ch1>>ch2>>x;
        int a1=(int)ch1;
        a1-=97;
        int a2=(int)ch2;
        a2-=97;
        if(arr[a1][a2]==-1)
            arr[a1][a2]=x;
        else if(arr[a1][a2]>x)
            arr[a1][a2]=x;

    }
    int cost=0;
    char ss[501];
    int xxx=s1.length();
    int yyy=s2.length();
    int flag=0;
    int mn;
    char cc;
    if(xxx==yyy)
    {
        for(int i=0; i<xxx; i++)
        {
            if(s1[i]==s2[i])
                ss[i]=s1[i];
            else
            {
                int a1=(int)s1[i];
                a1-=97;
                int a2=(int)s2[i];
                a2-=97;

                //cout<<a1<<a2<<endl;
                //cout<<arr[a1][a2]+97<<" "<<arr[a2][a1]+97<<endl;
                {
                    mn=10000;
                    for(int i=0; i<26; i++)
                    {
                        {
                            int aa=arr[a1][i]+arr[a2][i];
                            if(aa<mn)
                            {
                                mn=aa;
                                cc=i;
                                cc+=97;
                                cout<<cc<<endl;
                            }
                        }
                    }
                }
                if(mn==10000)
                {
                    flag=1;
                    //break;
                }
                else
                    {ss[i]=cc+97;cost+=mn;}
            }

        }
        if(flag==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            ss[xxx]='\0';
            cout<<cost<<endl;
            cout<<ss<<endl;
        }
    }
    else
        cout<<"-1"<<endl;

}
/*
uayd
uxxd
6
a c 2
a d 2
a e 1
x d 3
x e 7
y e 2

*/
