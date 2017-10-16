#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<=7;i++)
    {
        if(arr[i].length()==n)
        {
            flag=0;
            for(int j=0;j<n;j++)
            {
                if(s[j]!='.' && s[j]!=arr[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
    }


}
