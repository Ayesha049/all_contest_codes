/*#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int sz=0;
    int r=1;
    int last=0;
    list<int>arr;
    for(int i=1;i<=2*n;i++)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            int aa;
            cin>>aa;
            int f=0;
            list<int>::iterator i;
            for (i = arr.begin(); i != arr.end(); i++)
            {
                if(*i<aa)
                {
                    arr.insert(i,aa);
                    f=1;
                    break;

                }

            }

            if(f==0) arr.insert(i,aa);
            last=aa;
            sz++;


        }
        else
        {
            if(last==r)
            {
                r++;
                sz--;
                arr.remove(last);
                list<int>::iterator i;
                i = arr.end();
                cout<<*i<<endl;
                //i--;
                last=*i;

            }
            else
            {
                cnt++;

                arr.remove(r);
                list<int>::iterator i;
                i = arr.end();
                //i--;
                last=*i;
                cout<<*i<<endl;
                sz--;
                r++;
            }
        }
    }
    cout<<cnt<<endl;
}

*/



#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

const int ma=3e5+5;

priority_queue<int,vector<int>,greater<int> > q;
stack<int> s;

int main()
{
    int n,x;
    char c[10];
    while(scanf("%d",&n)!=EOF)
    {
       int ans=0,cnt=1;
        while(!q.empty()) q.pop();
        while(!s.empty()) s.pop();

        for(int i=0;i<2*n;++i)
        {
            getchar();
            scanf("%s",c);
            if(c[0]=='a')
            {
                scanf("%d",&x);
                s.push(x);
                q.push(x);
            }
            else
            {
                if(!s.empty())
                {
                    if(s.top()!=cnt)
                    {
                        ans++;
                        while(!s.empty()) s.pop();
                    }
                    else
                    {
                        s.pop();
                        q.pop();
                    }
                }
                cnt++;


            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
