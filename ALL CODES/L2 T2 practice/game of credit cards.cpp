#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s[1001];
    char m[1001];
    cin>>n>>s>>m;
    sort(m,m+n);


    string save=m;
    int maxcnt=0;
    int mincnt=n;


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i]<=save[j])
            {
                save[j] = '.';
                mincnt--;
                break;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i]<m[j])
            {
                m[j] = '.';
                maxcnt++;
                break;
            }
        }
    }

    cout<<mincnt<<endl<<maxcnt<<endl;
}
